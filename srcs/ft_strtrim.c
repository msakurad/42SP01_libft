/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:51:37 by msakurad          #+#    #+#             */
/*   Updated: 2023/05/16 21:10:44 by msakurad         ###   ########.fr       */
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
	// char	*s1_aux;
	// int		s1_aux_len;

	set_len = ft_strlen(set);
	s1_len = ft_strlen(s1);
	printf("len set %d, s1 %d\n", set_len, s1_len);
	p_ini_to_trim = ft_strnstr(s1, set, set_len);
	p_end_to_trim = ft_strnstr(s1 + s1_len - set_len - 1, set, set_len);
	// s1_aux = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	// s1_aux_len = ft_strlen(s1_aux);
	printf("1: p_ini %s, p_end %s\n", p_ini_to_trim, p_end_to_trim);
	if (p_ini_to_trim)
		p_ini_to_trim += set_len;
	s1_trimmed = (char *)malloc(sizeof(char) * (s1_len + 1));
	if (s1_trimmed == NULL)
		return (NULL);
	printf("2: p_ini %s, p_end %s\n", p_ini_to_trim, p_end_to_trim);
	ft_strlcpy(s1_trimmed, p_ini_to_trim, (int)(p_end_to_trim - s1) + 1 - set_len);
	return (s1_trimmed);
}
