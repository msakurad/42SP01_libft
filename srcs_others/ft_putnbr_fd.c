/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 23:13:17 by msakurad          #+#    #+#             */
/*   Updated: 2023/05/24 00:45:53 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n);

void	ft_putnbr_fd(int n, int fd)
{
	int	n_rev;

	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (n < 0)
		ft_putchar_fd('-', fd);
	n_rev = 0;
	while (ft_abs(n / 10) > 0)
	{
		n_rev = n_rev * 10 + ft_abs(n % 10);
		n /= 10;
		// printf("n_rev: %d e n: %d\n", n_rev, n);
	}
	// printf("n_rev: %d\n", n_rev);
	ft_putchar_fd(ft_abs(n) + '0', fd);
	while (n_rev != 0)
	{
		ft_putchar_fd(ft_abs(n_rev % 10) + '0', fd);
		n_rev /= 10;
	}
}

static int	ft_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
