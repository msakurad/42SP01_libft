/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:35:28 by msakurad          #+#    #+#             */
/*   Updated: 2023/05/20 09:58:53 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (!s || len >= __INT_MAX__)
		return (NULL);
	if ((size_t)start > s_len)
		return ft_strdup("");
	if (s_len - (size_t)start < len)
		len = s_len - (size_t)start;
	sub_s = (char *)malloc(sizeof(char) * (len + 1));
	if (sub_s == NULL)
		return (NULL);
	ft_strlcpy(sub_s, &s[start], len + 1);
	return (sub_s);
}
