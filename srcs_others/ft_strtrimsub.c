/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:51:37 by msakurad          #+#    #+#             */
/*   Updated: 2023/05/17 16:37:11 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		s1_len;
	int		set_len;
	char	*s1_trimmed;
	char	*p_ini_to_trim;
	char	*p_end_to_trim;

	set_len = ft_strlen(set);
	s1_len = ft_strlen(s1);
	p_ini_to_trim = ft_strnstr(s1, set, set_len);
	p_end_to_trim = ft_strnstr(s1 + s1_len - set_len - 1, set, set_len);
	if (p_ini_to_trim)
	{
		s1 += set_len;
		s1_len -= set_len;
	}
	if (p_end_to_trim)
		s1_len = (int)(p_end_to_trim - s1);
	s1_trimmed = (char *)malloc(sizeof(char) * (s1_len + 1));
	if (s1_trimmed == NULL)
		return (NULL);
	ft_strlcpy(s1_trimmed, s1, s1_len + 1);
	return (s1_trimmed);
}
