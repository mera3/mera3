/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyahaira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/02 23:03:41 by yyahaira          #+#    #+#             */
/*   Updated: 2020/10/02 23:43:53 by yyahaira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int l;

	l = 0;
	while (*str != 0)
	{
		l++;
		str++;
	}
	return (l);
}

int	main(void)
{
	printf("%d\n", ft_strlen("qwe"));
	return (0);
}
