/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyahaira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 00:09:58 by yyahaira          #+#    #+#             */
/*   Updated: 2020/10/02 00:34:26 by yyahaira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		main(void)
{
	int nb;
	int *nbr;

	nb = 6 + '0';
	nbr = &nb;
	write(1, &nbr, 1);
	return (0);
}
