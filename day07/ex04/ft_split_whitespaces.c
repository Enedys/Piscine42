/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwillum <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 15:01:54 by kwillum           #+#    #+#             */
/*   Updated: 2020/02/06 22:36:35 by kwillum          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src, int start, int final)
{
	int		counter;
	char	*p_tostr;

	counter = 0;
	p_tostr = (char *)malloc(sizeof(*src) * (final - start + 1));
	while (counter < final - start)
	{
		*(p_tostr + counter) = *(src + start + counter);
		counter++;
	}
	*(p_tostr + counter) = '\0';
	return (p_tostr);
}

int		ft_isspace(char c)
{
	if ((c == ' ') || (c == '\n') || (c == '\t') || (c == '\0'))
		return (1);
	else
		return (0);
}

int		ft_wordcounter(char *str)
{
	int counter;
	int counter2;

	counter = 0;
	counter2 = 0;
	while (!(str[counter] == '\0'))
	{
		if (!ft_isspace(str[counter]))
		{
			counter2++;
			while (!(ft_isspace(str[counter])))
				counter++;
		}
		else
			counter++;
	}
	return (counter2);
}

char	**ft_infill(char **words_arr, char *str, int num_words)
{
	int counter;
	int start_pos;
	int counter2;

	counter = 0;
	counter2 = 0;
	while (counter2 < num_words)
	{
		if (!(ft_isspace(str[counter])))
		{
			start_pos = counter;
			while (!(ft_isspace(str[counter])))
				counter++;
			*(words_arr + counter2) = ft_strdup(str, start_pos, counter);
			counter2++;
		}
		counter++;
	}
	return (words_arr);
}

char	**ft_split_whitespaces(char *str)
{
	char	**words_arr;
	int		num_words;

	num_words = ft_wordcounter(str);
	words_arr = (char **)malloc(sizeof(char *) * (num_words + 1));
	ft_infill(words_arr, str, num_words);
	*(words_arr + num_words) = NULL;
	return (words_arr);
}
