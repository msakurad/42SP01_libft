/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 12:04:08 by msakurad          #+#    #+#             */
/*   Updated: 2023/05/14 00:13:42 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_src;
	unsigned char	*ptr_dest;

	ptr_src = (unsigned char *)src;
	ptr_dest = (unsigned char *)dest;
	if (ptr_src == ptr_dest)
		return (dest);
	if (ptr_src < ptr_dest && (ptr_src + n*sizeof(char)) > ptr_dest)
	{
		ptr_dest += n*sizeof(char);
		ptr_src += n*sizeof(char);
		while (n--)
			*--ptr_dest = *--ptr_src;
	}
	else
		while (n--)
			*ptr_dest++ = *ptr_src++;
	return (dest);
}
