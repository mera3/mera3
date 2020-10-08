/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyahaira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 01:40:00 by yyahaira          #+#    #+#             */
/*   Updated: 2020/10/06 22:12:10 by yyahaira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int i;
	int n;

	i = 0;
	n = 0;
	while (str[i] != '\0')	
	{
			if (str[i] > 47 && str[i] < 58)
			n = 10 * n + (str[i] - '0');
		++i;
	}
	return (n);
}


int	main (int argc, char **argv)
{
	if (argc == 2)
		printf ("%d\n", ft_atoi(&argv[1][0]));
	return 0; 
}
