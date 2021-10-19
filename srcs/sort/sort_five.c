/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleam <mleam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 04:43:18 by mleam             #+#    #+#             */
/*   Updated: 2021/10/14 08:22:34 by mleam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	push_b(t_list **stack_a, t_list **stack_b)
{
	push(stack_a, stack_b);
	ft_putstr_fd("pb\n", 1);
}

void	push_from_b(t_list **stack_a, t_list **stack_b, int size_b)
{
	while (size_b != 0)
	{
		if (size_b == 2)
		{
			if ((*stack_b)->value < (*stack_b)->next->value)
			{
				swap(stack_b);
				ft_putstr_fd("sb\n", 1);
			}
			else
			{
				push(stack_b, stack_a);
				ft_putstr_fd("pa\n", 1);
				size_b--;
			}
		}
		else if (size_b == 1)
		{
			push(stack_b, stack_a);
			ft_putstr_fd("pa\n", 1);
			size_b--;
		}
	}
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	int	size_a;
	int	size_b;

	size_a = ft_lstsize(*stack_a);
	size_b = 0;
	if (!stack_is_sorted(stack_a))
	{
		while (size_a > 3)
		{
			if ((*stack_a)->index < 2)
			{
				push_b(stack_a, stack_b);
				size_b++;
				size_a--;
			}
			else if ((*stack_a)->index >= 2)
			{
				rotate(stack_a);
				ft_putstr_fd("ra\n", 1);
			}
		}
		*stack_a = stack_all_index(stack_a);
		sort_three(stack_a);
		push_from_b(stack_a, stack_b, size_b);
	}
}
