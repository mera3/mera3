/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyahaira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 01:40:00 by yyahaira          #+#    #+#             */
/*   Updated: 2020/10/07 16:26:15 by yyahaira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int i;
	int n;
	int z;

	i = 0;
	n = 0;
	z = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ||
		str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
	{
		++i;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			z = 1;
		++i;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = 10 * n + (str[i] - '0');
		++i;
	}
	if (z == 1)
		return (-n);
	else
		return (n);
}

int	main (int argc, char **argv)
{
	if (argc == 2)
	{
		printf ("%d\n", ft_atoi(&argv[1][0]));
	}
	else
		write(1, "\n", 1);
	return 0; 
}
