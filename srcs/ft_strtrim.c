/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:51:37 by msakurad          #+#    #+#             */
/*   Updated: 2023/06/01 01:56:42 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		s1_len;
	char	*s1_trimmed;

	s1_len = ft_strlen(s1);
	while (*s1)
	{
		if (!ft_strchr(set, *s1))
			break ;
		s1++;
		s1_len--;
	}
	while (ft_strchr(set, s1[s1_len - 1]) && s1_len)
		s1_len--;
	s1_trimmed = (char *)malloc(sizeof(char) * (s1_len + 1));
	if (s1_trimmed == NULL)
		return (NULL);
	ft_strlcpy(s1_trimmed, s1, s1_len + 1);
	return (s1_trimmed);
}
