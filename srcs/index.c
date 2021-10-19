/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleam <mleam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 16:48:51 by mleam             #+#    #+#             */
/*   Updated: 2021/10/15 02:19:23 by mleam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	stack_one_index(t_list *lst, t_list *elem)
{
	elem->index = 0;
	if (lst)
	{
		while (lst)
		{
			if (elem->value > lst->value)
				elem->index += 1;
			lst = lst->next;
		}
	}
}

t_list	*stack_all_index(t_list **lst)
{
	t_list	*tmp;

	tmp = (*lst);
	if (*lst)
	{
		while (tmp)
		{
			stack_one_index(*lst, tmp);
			tmp = tmp->next;
		}	
	}
	return (*lst);
}
