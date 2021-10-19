/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleam <mleam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:25:09 by mleam             #+#    #+#             */
/*   Updated: 2021/10/15 02:34:24 by mleam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rotate(t_list **lst)
{
	t_list	*tmp;

	if (!(*lst))
		return ;
	if ((*lst) && (*lst)->next)
	{
		tmp = (*lst);
		(*lst) = (*lst)->next;
		ft_lstadd_back(lst, tmp);
		tmp->next = NULL;
	}
}

void	rr(t_list **lst_a, t_list **lst_b)
{
	rotate(lst_a);
	rotate(lst_b);
}
