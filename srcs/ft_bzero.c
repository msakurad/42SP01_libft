/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 21:18:39 by msakurad          #+#    #+#             */
/*   Updated: 2023/05/12 00:01:07 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr_s;

	ptr_s = (unsigned char *)s;
	while (n--)
	{
		*ptr_s = '\0';
		ptr_s++;
	}
}
