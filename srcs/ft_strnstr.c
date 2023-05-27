/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:57:38 by msakurad          #+#    #+#             */
/*   Updated: 2023/05/27 15:31:06 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	c_lit;
	size_t	c_big;

	c_big = 0;
	if (!*little)
		return ((char *)big);
	while (big[c_big] && c_big < len)
	{
		c_lit = 0;
		while (little[c_lit])
		{
			if (big[c_big + c_lit] != little[c_lit] || c_big + c_lit > len - 1)
				break ;
			c_lit++;
		}
		if (!little[c_lit])
			return ((char *)big + c_big);
		c_big++;
	}
	return (NULL);
}
