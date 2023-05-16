/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 18:31:02 by msakurad          #+#    #+#             */
/*   Updated: 2023/05/16 14:41:58 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr_mem;

	if (!size || !nmemb || nmemb >= __INT_MAX__ / size)
		return (NULL);
	ptr_mem = malloc(nmemb * size);
	if (ptr_mem == NULL)
		return (NULL);
	ft_bzero(ptr_mem, nmemb * size);
	return (ptr_mem);
}
