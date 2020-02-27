/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 16:49:22 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/19 21:14:44 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct		s_list
{
	struct s_list	*next;
	int				x;
	int				y;
}					t_list;

typedef struct		s_rect
{
	int				x_left;
	int				x_right;
	int				y_bottom;
	int				y_top;
}					t_rect;

typedef struct		s_point
{
	int				x;
	int				y;
}					t_point;

typedef struct		s_brect
{
	int 			x;
	int 			y;
	int 			len;
}					t_brect;

t_list				*ft_create_elem(int x, int y);
void				ft_list_push_back(t_list **begin_list, int x, int y);
void				ft_list_push_front(t_list **begin_list, int x, int y);
int					ft_list_size(t_list *begin_list);
t_list				*ft_list_at(t_list *begin_list, unsigned int nbr);
void				ft_putchar(char c);
void				ft_putnbr(int nb);
void				ft_putstr(char *str);
void				ft_print_list(t_list *begin_list);
void				ft_print_element(t_list *begin_list, unsigned int nbr);
int					ft_atoi(char *str);
void				 choose_subfield(t_rect *c_rect, t_list *c_lim, t_brect *best_res, t_list *begin);
void				find_max(t_list *begin, t_brect *best_res, t_rect c_rect);//current_rect

#endif
