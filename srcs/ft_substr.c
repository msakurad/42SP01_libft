/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:35:28 by msakurad          #+#    #+#             */
/*   Updated: 2023/05/16 15:29:44 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (len > __INT_MAX__ || len + (size_t)start > s_len)
		return (NULL);
	sub_s = (char *)malloc(sizeof(char) * (len + 1));
	ft_strlcpy(sub_s, &s[start], len + 1);
	return (sub_s);
}
