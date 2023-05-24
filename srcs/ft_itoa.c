/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 16:04:16 by msakurad          #+#    #+#             */
/*   Updated: 2023/05/23 22:38:07 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_str_size(int n);
static int	ft_abs_value(int n);

char	*ft_itoa(int n)
{
	char	*str_itoa;
	int		str_size;

	str_size = ft_str_size(n);
	if (n == 0)
		return (ft_strdup("0"));
	str_itoa = (char *)malloc(sizeof(char) * (str_size + 1));
	if (str_itoa == NULL)
		return (NULL);
	if (n < 0)
		str_itoa[0] = '-';
	str_itoa[str_size] = '\0';
	while (n != 0)
	{
		str_size--;
		str_itoa[str_size] = ft_abs_value(n % 10) + '0';
		n = n / 10;
	}
	return (str_itoa);
}

static int	ft_str_size(int n)
{
	int	size;

	size = 0;
	if (n < 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static int	ft_abs_value(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
