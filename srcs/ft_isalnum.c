/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:15:40 by msakurad          #+#    #+#             */
/*   Updated: 2023/05/04 16:21:47 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isalpha_aux(int c);
static int	ft_isdigit_aux(int c);

int	ft_isalnum(int c)
{
	return (ft_isalpha_aux(c) || ft_isdigit_aux(c));
}

static int	ft_isalpha_aux(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (2);
	else
		return (0);
}

static int	ft_isdigit_aux(int c)
{
	return (c >= '0' && c <= '9');
}
