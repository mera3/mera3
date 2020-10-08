/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyahaira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 16:30:17 by yyahaira          #+#    #+#             */
/*   Updated: 2020/10/07 18:57:20 by yyahaira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int f;

	f = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb > 0)
	{
		f = f * nb;
		nb--;
	}
	return (f);
}

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(4));
	return (0);
}
