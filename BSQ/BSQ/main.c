/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 04:50:47 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/19 22:55:47 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int ft_min(int val1, int val2)
{
	if (val1 > val2)
		return (val2);
	else
		return (val1);
}

t_point ft_centre(t_rect *current_rect)		//здесь создаю переменную типа t_point, 
											//в которой хранится значения центра текущего квадрата
{
	t_point		centr_position;

	centr_position.x = (current_rect->x_left + current_rect->x_right) / 2; 
	centr_position.y = (current_rect->y_bottom + current_rect->y_top) / 2;
	return (centr_position);
}

int ft_metrics(t_list *cur, t_point c_pos) 	//функция для определения расстояния отдельно взятого 
											//препятствия до центра квадрата
{
	int result;

	result = (cur->x - c_pos.x) * (cur->x - c_pos.x) + (cur->y - c_pos.y) * (cur->y - c_pos.y);
	return (result);
}

int ft_inside(t_rect *field, t_list *cur)		//функция для того, чтобы определить принадлежит ли 
												//препятствие текущему квадрату
{
	if (cur->x >= field->x_left && cur->x <= field->x_right &&
		cur->y >= field->y_top && cur->y <= field->y_bottom)
			return (1);
	else
		return (0);
}

t_list *ft_closest(t_rect field, t_list *begin) //функция возвращает указатель ближайшего к центру препятствия
{
	t_list *closest;
	int distance;
	t_point centre_pos;

	closest = NULL;
	if (begin)
	{
		centre_pos = ft_centre(&field);
		distance = 2147483647;
		while (begin->next)
		{
			if (ft_inside(&field, begin))
			{
				if (distance >= ft_metrics(begin, centre_pos))
				{
					distance = ft_metrics(begin, centre_pos);
					closest = begin;
				}
			}
			begin = begin->next;
		}
	}
	return (closest);
}

int ft_num_lines(int fd, char *symbols)	//функция для обработки первой строки
{
	char  one_char;
	int counter;
	int num_lines;
	char *first_line_buffer;

	counter = 0;
	first_line_buffer = malloc(sizeof(char) * 16);
	while (read(fd, &one_char, 1) && !(one_char == '\n')) 
	{
		*(first_line_buffer + counter) = one_char;
		counter++;
	}
	symbols[0] = *(first_line_buffer + counter - 3);
	symbols[1] = *(first_line_buffer + counter - 2);
	symbols[2] = *(first_line_buffer + counter - 1);
	*(first_line_buffer + counter - 3) = 's';
	num_lines = ft_atoi(first_line_buffer);
	free(first_line_buffer);
	return (num_lines);
}

int is_valid_sym(char sym, char *syms)
{
	if (sym == syms[0] || sym == syms[1] || sym == '\n')
		return (1);
	else
		return (0);
}

t_list *ft_lim_list(int fd, char *sym_lim, int *num_cols, int num_lines) // короче тут идет по массиву и ищет препятствия!!!
{
	char one_char;
	int row_counter;
	int col_counter;
	t_list *begin_list;
	int max_col;

	begin_list = NULL;
	num_lines = num_lines + 1;
	row_counter = 0;
	col_counter = 0;
	while (read(fd, &one_char, 1))
	{
		printf("%c", one_char);
		if (!(is_valid_sym(one_char, sym_lim)))
			return NULL;
		if (one_char == sym_lim[1])
			ft_list_push_back(&begin_list, col_counter, row_counter);
		if (one_char == '\n')
		{
			row_counter += 1;
//			if ((!(max_col == col_counter) || !(row_counter == 1)) && !(num_lines == row_counter))
//				return NULL;
			max_col = col_counter;
			col_counter = 0;
		}
		else
			col_counter++;
	}
	*num_cols = max_col;
	return (begin_list);
}

void choose_subfield(t_rect *c_rect, t_list *c_lim, t_brect *best_res, t_list *begin)
{
	t_rect n_rect;
	{
		n_rect.x_left = c_rect->x_left;
		n_rect.x_right = c_rect->x_right;
		n_rect.y_top = c_rect->y_top;
		n_rect.y_bottom = c_lim->y - 1;
		if (ft_min(n_rect.x_right - n_rect.x_left, n_rect.y_bottom - n_rect.y_top) >= best_res->len)
			find_max(begin, best_res, n_rect);
	}
	{
		n_rect.x_left = c_rect->x_left;
		n_rect.x_right = c_lim->x - 1;
		n_rect.y_top = c_rect->y_top;
		n_rect.y_bottom = c_rect->y_bottom;	
		if (ft_min(n_rect.x_right - n_rect.x_left, n_rect.y_bottom - n_rect.y_top) >= best_res->len)
			find_max(begin, best_res, n_rect);
	}
	{
		n_rect.x_left = c_rect->x_left;
		n_rect.x_right = c_rect->x_right;
		n_rect.y_top = c_lim->y + 1;
		n_rect.y_bottom = c_rect->y_bottom;
		if (ft_min(n_rect.x_right - n_rect.x_left, n_rect.y_bottom - n_rect.y_top) >= best_res->len)
			find_max(begin, best_res, n_rect);
	}
	{
		n_rect.x_left = c_lim->x + 1;
		n_rect.x_right = c_rect->x_right;
		n_rect.y_top = c_rect->y_top;
		n_rect.y_bottom = c_rect->y_bottom;
		if (ft_min(n_rect.x_right - n_rect.x_left, n_rect.y_bottom - n_rect.y_top) >= best_res->len)
			find_max(begin, best_res, n_rect);
	}
}

void ft_refresh_best(t_rect *c_rect, t_brect *best_res)
{
	if (ft_min(c_rect->x_right - c_rect->x_left, c_rect->y_bottom - c_rect->y_top) + 1 >= best_res->len)
	{
		best_res->len = ft_min(c_rect->x_right - c_rect->x_left, c_rect->y_bottom - c_rect->y_top) + 1;
		best_res->x = c_rect->x_left;
		best_res->y = c_rect->y_top;
		ft_putstr("\n !!! _new_max_ !!! : ");
		ft_putnbr(best_res->len);
		ft_putstr("\n");
	}
}

void find_max(t_list *begin, t_brect *best_res, t_rect c_rect) //current_rect
{
	t_list *c_lim; //centre_limitation

	c_lim = ft_closest(c_rect, begin);
	if (c_lim)
	{
		choose_subfield(&c_rect, c_lim, best_res, begin);
	}
	else
	{
		ft_refresh_best (&c_rect, best_res);
	}
}

int	main(int argc, char **argv)
{
	int		fd;
	int num_lines;
	int num_cols;
	char symbols[4]; // 0 - free, 1 - limitation, x - max_sqr char - массив в котором хранится первая строка
	int counter;

	t_rect test_rect;     //эта и следущаю переменная для тестов
	t_list *begin_limit;
	t_brect init_rect;

	counter = 0;
	if (argc == 1)
		ft_putstr("File name missing. \n");
	else if  (argc > 2)
		ft_putstr("Too many arguments. \n");
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
		{
			ft_putstr("error");
			return (0);
		}

		num_lines = ft_num_lines(fd, symbols);   //обработка первой строки
		begin_limit = ft_lim_list(fd, symbols, &num_cols, num_lines);
		if (!(begin_limit))
		{
			printf("error");
			return (0);
		}
		ft_putstr("\n Число строк (y): ");
		ft_putnbr(num_lines);
		ft_putstr("\n Число столбцов (x): ");
		ft_putnbr(num_cols);

		test_rect.x_left = 0;   //проверил корректность на исходном квадрате
		test_rect.x_right = num_cols - 1;
		test_rect.y_top = 0;
		test_rect.y_bottom = num_lines - 1;

		init_rect.x = 200000;
		init_rect.y = 200000;
		init_rect.len = 0;
		find_max(begin_limit, &init_rect, test_rect);
		printf("x: %d, y: %d", init_rect.x, init_rect.y);
		close(fd);
	}
	return (0);
}
