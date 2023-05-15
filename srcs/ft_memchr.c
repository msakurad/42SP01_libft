/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:32:38 by msakurad          #+#    #+#             */
/*   Updated: 2023/05/15 15:41:50 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_char;
	unsigned char	c_char;

	s_char = (unsigned char *)s;
	c_char = (unsigned char)c;
	while (*s_char != c_char && n--)
		s_char++;
	if (*s_char == c_char)
		return ((void *)s_char);
	return (NULL);
}
