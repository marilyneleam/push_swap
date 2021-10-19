/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleam <mleam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:50:16 by mleam             #+#    #+#             */
/*   Updated: 2021/10/15 02:34:07 by mleam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	swap(t_list **lst)
{
	int	tmp;

	if (!(*lst))
		return ;
	if (*lst)
	{
		tmp = (*lst)->value;
		(*lst)->value = (*lst)->next->value;
		(*lst)->next->value = tmp;
	}
}

void	ss(t_list **lst_a, t_list **lst_b)
{
	swap(lst_a);
	swap(lst_b);
}
