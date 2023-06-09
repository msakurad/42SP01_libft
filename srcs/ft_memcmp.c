/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:01:29 by msakurad          #+#    #+#             */
/*   Updated: 2023/05/24 01:36:12 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_char;
	const unsigned char	*s2_char;

	if (n == 0)
		return (0);
	s1_char = (const unsigned char *)s1;
	s2_char = (const unsigned char *)s2;
	while (*s1_char == *s2_char && --n)
	{
		s1_char++;
		s2_char++;
	}
	return (*s1_char - *s2_char);
}
