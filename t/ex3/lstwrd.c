/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstwrd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyahaira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 19:27:03 by yyahaira          #+#    #+#             */
/*   Updated: 2020/10/06 20:22:42 by yyahaira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_lstwrd(char *str)
{
	int i;
	int l;

	i = 0;
	l = 0;
	while (str[i] != '\0')
		++i;
	while (str[i] <= 32)
		i--;
	l = i;
	while (!(str[i] <= 32))
		--i;
	i++;
	while (i <= l)
	{
		write(1, &str[i], 1);
		++i;
	}	
}

int		main(int argc, char **argv)
{
	if  (argc == 2)
	{
		ft_lstwrd(&argv[1][0]);
		write(1, "\n", 1);
	}
	return (0);
}
