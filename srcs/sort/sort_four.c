/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleam <mleam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 08:01:20 by mleam             #+#    #+#             */
/*   Updated: 2021/10/14 08:19:27 by mleam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_four(t_list **stack_a, t_list **stack_b)
{
	int	size_a;

	size_a = ft_lstsize(*stack_a);
	if (!stack_is_sorted(stack_a))
	{
		while (size_a > 3)
		{
			if ((*stack_a)->index < 1)
			{
				push(stack_a, stack_b);
				ft_putstr_fd("pb\n", 1);
				size_a--;
			}
			else if ((*stack_a)->index >= 1)
			{
				rotate(stack_a);
				ft_putstr_fd("ra\n", 1);
			}
		}
		*stack_a = stack_all_index(stack_a);
		sort_three(stack_a);
		push(stack_b, stack_a);
		ft_putstr_fd("pa\n", 1);
	}
}
