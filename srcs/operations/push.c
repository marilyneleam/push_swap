/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleam <mleam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:17:39 by mleam             #+#    #+#             */
/*   Updated: 2021/10/15 06:18:21 by mleam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	push(t_list **lst_srcs, t_list **lst_dest)
{
	t_list	*tmp;

	if (!(*lst_srcs))
		return ;
	if (*lst_srcs)
	{
		tmp = (*lst_srcs);
		(*lst_srcs) = (*lst_srcs)->next;
		if (*lst_dest)
		{
			ft_lstadd_front(lst_dest, tmp);
		}
		else
		{
			(*lst_dest) = ft_lstnew(tmp->value);
			free(tmp);
		}
	}
}
