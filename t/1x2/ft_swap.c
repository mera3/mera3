/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyahaira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 00:53:50 by yyahaira          #+#    #+#             */
/*   Updated: 2020/10/02 01:09:03 by yyahaira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}

int		main(void)
{
	int e;
	int m;

	e = 1;
	m = 4;
	ft_swap(&e, &m);
	printf("a=%d\n", e);
	printf("b=%d\n", m);
	return (0);
}
