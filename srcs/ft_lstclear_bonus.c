/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:18:40 by msakurad          #+#    #+#             */
/*   Updated: 2023/05/26 23:24:33 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst != NULL && *lst != NULL && del != NULL)
	{
		temp = *lst;
		while (*lst)
		{
			temp = temp->next;
			ft_lstdelone(*lst, del);
			*lst = temp;
		}
	}
}
