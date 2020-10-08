/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyahaira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 18:47:24 by yyahaira          #+#    #+#             */
/*   Updated: 2020/10/06 19:30:29 by yyahaira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_strrev(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		++i;
	while (i >= 0)
	{
		write(1, &str[i], 1);
		--i;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_strrev(&argv[1][0]);
		write(1, "\n", 1);
	}
	return (0);
}
