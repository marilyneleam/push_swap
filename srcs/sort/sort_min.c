/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleam <mleam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 04:42:22 by mleam             #+#    #+#             */
/*   Updated: 2021/10/15 01:37:04 by mleam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_min(t_list **stack_a)
{
	if (!stack_is_sorted(stack_a))
	{
		if ((*stack_a)->value > (*stack_a)->next->value)
		{
			swap(stack_a);
			ft_putstr_fd("sa\n", 1);
		}
	}
}
