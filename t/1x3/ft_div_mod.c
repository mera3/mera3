/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyahaira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 21:51:20 by yyahaira          #+#    #+#             */
/*   Updated: 2020/10/02 23:02:12 by yyahaira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0 || a != 0)
		*div = a / b;
		*mod = a % b;
}

int		main(void)
{
	int e;
	int r;

	ft_div_mod(9, 3, &e, &r);
	ft_putchar(e + '0');
	write(1, "\n", 1);
	ft_putchar(r + '0');
	write(1, "\n", 1);
	printf("a=%d\n", e);
	printf("b=%d\n", r);
	return (0);
}
