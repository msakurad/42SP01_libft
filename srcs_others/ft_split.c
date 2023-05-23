/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 15:18:25 by msakurad          #+#    #+#             */
/*   Updated: 2023/05/23 13:34:39 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**split_arr;
	int		nbr_words;
	int		new_str_len;
	char	*find_c;
	char	*pos_aux;
	int		count;

	s = ft_strtrim(s, &c);
	nbr_words = ft_count_words(s, c);
	split_arr = (char **)malloc(sizeof(char *) * (nbr_words + 1));
	if (split_arr == NULL)
		return (NULL);
	count = 0;
	find_c = (char *)s - 1;
	while (count < nbr_words)
	{
		pos_aux = find_c;
		find_c = ft_strchr(find_c + 1, c);
		if (find_c == NULL && count == nbr_words - 1)
			new_str_len = ft_strlen(s) - new_str_len;
		else
			new_str_len = (int)(find_c - pos_aux - 1);
		split_arr[count] = ft_substr(s, (int)(pos_aux - s + 1), new_str_len);
		count++;
	}
	split_arr[count] = '\0';
	return (split_arr);
}

static int	ft_count_words(char const *s, char c)
{
	int	count;

	count = 0;
	if (!*s)
		return (0);
	while(*s)
	{
		s++;
		if ((*s == c && *s + 1 != c) || !*s)
			count++;
	}
	return (count);
}
