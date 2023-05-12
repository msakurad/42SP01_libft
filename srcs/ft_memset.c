/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:57:30 by msakurad          #+#    #+#             */
/*   Updated: 2023/05/11 21:01:44 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*char_s;
	unsigned char	char_c;
	size_t			count;

	char_s = (unsigned char *)s;
	//printf("endr *s %p, *char_s %p\n", s, char_s);
	char_c = (unsigned char)c;
	count = 0;
	while (count < n)
	{
		char_s[count] = char_c;
		count++;
	}
	return (s);
}
