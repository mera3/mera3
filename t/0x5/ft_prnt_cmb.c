/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prnt_cmb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyahaira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 15:49:58 by yyahaira          #+#    #+#             */
/*   Updated: 2020/10/01 19:19:25 by yyahaira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	prnt_abc(char a1, char b1, char c1)
{
	write(1, &a1, 1);
	write(1, &b1, 1);
	write(1, &c1, 1);
	if (a1 != '7' || b1 != '8' || c1 != '9')
		write(1, ", ", 2);
}

void	ft_prnt_cmb(void)
{
	int a;
	int b;
	int c;

	a = '0';
	while (a <= '9')
	{
		b = a + 1;
		while (b <= '9')
		{
			c = b + 1;
			while (c <= '9')
			{
				prnt_abc(a, b, c);
				++c;
			}
			++b;
		}
		++a;
	}
}

int		main(void)
{
	ft_prnt_cmb();
}
