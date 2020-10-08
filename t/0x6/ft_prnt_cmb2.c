/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prnt_cmb2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyahaira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 18:47:35 by yyahaira          #+#    #+#             */
/*   Updated: 2020/10/01 22:16:35 by yyahaira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_prnt_xx(ab)
{
	if (ab < 10)
	{
		ft_putchar('0');
		ft_putchar(ab +'0');
	}
	else
	{
		ft_putchar(ab / 10 + '0');
		ft_putchar(ab % 10 + '0');
	}
}

void	ft_prnt_ab(int a1, int b1)
{
	ft_prnt_xx(a1);
	write(1, " ", 1);
	ft_prnt_xx(b1);
	if (a1 != 98 || b1 != 99)
		write(1, ", ", 2);
}

void	ft_prnt_cmb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_prnt_ab(a, b);
			++b;
		}
		++a;
	}

}

int		main(void)
{
	ft_prnt_cmb2();
	return (0);
}
