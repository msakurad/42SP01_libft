/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 23:13:17 by msakurad          #+#    #+#             */
/*   Updated: 2023/05/24 01:01:38 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n);

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n != -1)
			ft_putnbr_fd(ft_abs(n / 10), fd);
	}
	if (n / 10 > 0)
		ft_putnbr_fd(ft_abs(n / 10), fd);
	ft_putchar_fd(ft_abs(n % 10) + '0', fd);
}

static int	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
