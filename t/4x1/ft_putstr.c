/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4x1.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyahaira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 22:42:20 by yyahaira          #+#    #+#             */
/*   Updated: 2020/10/05 23:20:19 by yyahaira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int		main(void)
{
	ft_putstr("qwerty");
	return (0);
}
