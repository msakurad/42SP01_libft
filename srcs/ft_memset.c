/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:57:30 by msakurad          #+#    #+#             */
/*   Updated: 2023/05/15 14:30:28 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*char_s;
	unsigned char	char_c;
	size_t			count;

	char_s = (unsigned char *)s;
	char_c = (unsigned char)c;
	count = 0;
	while (count < n)
	{
		char_s[count] = char_c;
		count++;
	}
	return (s);
}
