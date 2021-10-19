/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleam <mleam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 04:55:21 by mleam             #+#    #+#             */
/*   Updated: 2021/10/14 08:14:05 by mleam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_double(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while ((i < ac) && av[i + 1])
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_atoll(av[i]) == ft_atoll(av[j++]))
				return (0);
		}
		i++;
	}
	return (1);
}

int	check_is_no_digit(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	while (++i < ac)
	{
		j = -1;
		while (av[i][++j])
		{
			if (j == 0 && (av[i][j] == '-' || av[i][j] == '+'))
			{
				if (av[i][j + 1] < '0' || av[i][j + 1] > '9')
					return (0);
			}
			else if (av[i][j] < '0' || av[i][j] > '9')
				return (0);
		}
	}
	return (1);
}

int	check_integer(int ac, char **av)
{
	int	i;

	i = 0;
	while (++i < ac)
	{
		if (ft_strlen(av[i]) > 11)
			return (0);
		else if (ft_strlen(av[i]) == 10 && (ft_atoll(av[i]) > INT_MAX))
			return (0);
		else if (ft_strlen(av[i]) == 11 && (ft_atoll(av[i]) < INT_MIN))
			return (0);
		else if ((ft_atoll(av[i]) > INT_MAX) || (ft_atoll(av[i]) < INT_MIN))
			return (0);
	}
	return (1);
}

int	parsing_error(int ac, char **av)
{
	if (!(check_is_no_digit(ac, av)))
		return (0);
	else if (!(check_double(ac, av)))
		return (0);
	else if (!(check_integer(ac, av)))
		return (0);
	return (1);
}

void	result_error(int ac, char **av)
{
	if (!(parsing_error(ac, av)))
	{
		ft_putstr_fd("Error\n", 2);
		exit(EXIT_FAILURE);
	}
	if (arg_is_sorted(ac, av))
		exit(EXIT_SUCCESS);
}
