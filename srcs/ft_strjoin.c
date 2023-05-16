/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msakurad <msakurad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:36:15 by msakurad          #+#    #+#             */
/*   Updated: 2023/05/16 18:31:53 by msakurad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s_joined;
	int		s1_len;
	int		s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	s_joined = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (s_joined == NULL)
		return (NULL);
	ft_strlcpy(s_joined, s1, s1_len + 1);
	ft_strlcat(s_joined, s2, s1_len + s2_len + 1);
	return (s_joined);
}
