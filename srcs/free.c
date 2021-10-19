/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleam <mleam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 02:26:04 by mleam             #+#    #+#             */
/*   Updated: 2021/10/15 02:33:36 by mleam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_all(t_list *lst)
{
	t_list	*tmp;

	if (lst)
	{
		while (lst)
		{
			tmp = lst->next;
			free(lst);
			lst = tmp;
		}
		lst = NULL;
	}
}
