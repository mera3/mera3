/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyahaira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 23:03:12 by yyahaira          #+#    #+#             */
/*   Updated: 2020/10/06 01:38:40 by yyahaira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int i;

	if (nb > 0)
		i = nb;
	if (nb < 0)
	{
		i = nb * -1;
		write(1, "-", 1);
	}
	if (i > 9)
		ft_putnbr(i / 10);
		ft_putchar((i % 10) + '0');
}

int		main(void)
{
	ft_putnbr(-10);
	write(1, "\n", 1);
	return (0);
}
