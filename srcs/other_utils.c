/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleam <mleam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 01:59:05 by mleam             #+#    #+#             */
/*   Updated: 2021/10/15 06:21:16 by mleam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	def_index_int_max(int size_max)
{
	if (size_max < 50)
		return (12);
	else if (size_max < 100)
		return (19);
	else
		return (38);
}

int	search_pos_max_index(t_list **stack_b)
{
	int		i;
	int		max;
	t_list	*tmp;

	i = 0;
	tmp = *stack_b;
	max = ft_lstsize(*stack_b) - 1;
	while (tmp)
	{
		if (tmp->index == max)
			return (i);
		i++;
		tmp = tmp->next;
	}
	return (0);
}

void	rotate_x(t_list **stack_b)
{
	int	i;

	i = search_pos_max_index(stack_b);
	while (i)
	{
		rotate(stack_b);
		ft_putstr_fd("rb\n", 1);
		i--;
	}
}

void	rev_rotate_x(t_list **stack_b)
{
	int	i;
	int	j;

	i = search_pos_max_index(stack_b);
	j = ft_lstsize(*stack_b) - i;
	while (j)
	{
		rev_rotate(stack_b);
		ft_putstr_fd("rrb\n", 1);
		j--;
	}
}
