/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 00:22:07 by msakurad          #+#    #+#             */
/*   Updated: 2023/05/20 02:28:05 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	count;
	int	last_ocurrence;

	count = 0;
	last_ocurrence = -1;
	while (s[count])
	{
		if (s[count] == (unsigned char)c)
			last_ocurrence = count;
		count++;
	}
	if ((unsigned char)c == 0)
		return ((char *)s + count);
	else if (last_ocurrence >= 0)
		return ((char *)s + last_ocurrence);
	return (NULL);
}
