/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyahaira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 00:06:12 by yyahaira          #+#    #+#             */
/*   Updated: 2020/10/08 00:36:07 by yyahaira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int n)
{
	if (n < 0 || n > 46)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1 || n == 2)
		return (1);
	return (ft_fibonacci(n - 1) + ft_fibonacci(n - 2));
}

int	main(void)
{
	printf("%d\n", ft_fibonacci(8));
	return (0);
}
