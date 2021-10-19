/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleam <mleam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 05:35:04 by mleam             #+#    #+#             */
/*   Updated: 2021/10/15 00:48:09 by mleam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	arg_is_sorted(int ac, char **av)
{
	int	i;

	i = 0;
	while (i < ac && av[i + 1])
	{
		if (ft_atoll(av[i]) > ft_atoll(av[i + 1]))
			return (0);
		i++;
	}
	return (1);
}

int	stack_is_sorted(t_list **lst)
{
	t_list	*tmp;

	tmp = (*lst);
	while (tmp->next)
	{
		if (tmp->index > tmp->next->index)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
