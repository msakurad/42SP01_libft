/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 15:18:25 by msakurad          #+#    #+#             */
/*   Updated: 2023/05/23 15:54:18 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_fill_arr(char **split_arr, char *s, char c);
static int	ft_count_words(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**split_arr;
	int		nbr_words;

	if (!s)
		return (NULL);
	nbr_words = ft_count_words(s, c);
	split_arr = (char **)malloc(sizeof(char *) * (nbr_words + 1));
	if (split_arr == NULL)
	{
		free(split_arr);
		return (NULL);
	}
	ft_fill_arr(split_arr, (char *)s, c);
	return (split_arr);
}

static void	ft_fill_arr(char **split_arr, char *s, char c)
{
	char	*next_c;

	next_c = s;
	while (*next_c)
	{
		while (*s == c)
			s++;
		next_c = s;
		while (*next_c && *next_c != c)
			next_c++;
		if (*next_c == c || next_c > s)
		{
			*split_arr = ft_substr(s, 0, next_c - s);
			s = next_c;
			split_arr++;
		}
	}
	*split_arr = NULL;
}

static int	ft_count_words(char const *s, char c)
{
	int	count;

	count = 0;
	if (!*s)
		return (0);
	while(*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}
