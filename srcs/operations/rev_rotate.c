/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleam <mleam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:26:37 by mleam             #+#    #+#             */
/*   Updated: 2021/10/15 02:34:11 by mleam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rev_rotate(t_list **lst)
{
	t_list	*last;
	t_list	*before;

	if (!(*lst))
		return ;
	if ((*lst) && (*lst)->next)
	{
		last = (*lst);
		before = (*lst);
		while (last->next)
		{
			before = last;
			last = last->next;
		}
		ft_lstadd_front(lst, last);
		before->next = NULL;
	}
}

void	rrr(t_list **lst_a, t_list **lst_b)
{
	rev_rotate(lst_a);
	rev_rotate(lst_b);
}
