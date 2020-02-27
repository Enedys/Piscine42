/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eval.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 18:23:55 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/16 23:27:53 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_EVAL_H
# define FT_EVAL_H

void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int nb);
long long int		ft_atoi(char *str);
long long int		num_op(char ch);
long long int		oper(int num_oper, long long int val1, long long int val2);
int					is_operator(char tmp);
long long int		in_calc(char *st, long long int val, int *pos);
int					ft_dimnb(long long int nb);
long long int		next_nb(char *str, int *pos);
int					eval_expr(char *str);

#endif
