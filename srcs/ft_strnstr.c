/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:57:38 by msakurad          #+#    #+#             */
/*   Updated: 2023/05/15 17:09:06 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	c_little;
	size_t	c_big;

	c_big = 0;
	if (!*little)
		return ((char *)big);
	while (big[c_big])
	{
		c_little = 0;
		while (c_little < len)
		{
			if (big[c_big + c_little] != little[c_little])
				break ;
			c_little++;
		}
		if (!little[c_little] || c_little == len)
			return ((char *)big + c_big);
		c_big++;
	}
	return (NULL);
}
