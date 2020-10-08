/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyahaira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 19:01:03 by yyahaira          #+#    #+#             */
/*   Updated: 2020/10/07 19:35:57 by yyahaira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorail(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb <= 1)
		return (1);
	else
		return (nb * ft_recursive_factorail(nb - 1));
}

int	main(void)
{
	printf("%d\n", ft_recursive_factorail(3));
	return (0);
}
