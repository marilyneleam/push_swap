/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleam <mleam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 19:22:50 by mleam             #+#    #+#             */
/*   Updated: 2021/10/15 05:42:34 by mleam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		i;

	i = 1;
	stack_a = NULL;
	stack_b = NULL;
	result_error(ac, av);
	while (i < ac)
	{
		ft_lstadd_back(&stack_a, ft_lstnew(ft_atoll(av[i])));
		i++;
	}
	stack_all_index(&stack_a);
	parsing(&stack_a, &stack_b, i);
	free_all(stack_b);
	free_all(stack_a);
	return (0);
}
