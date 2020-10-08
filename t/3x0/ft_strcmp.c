/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyahaira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 23:48:42 by yyahaira          #+#    #+#             */
/*   Updated: 2020/10/05 01:02:54 by yyahaira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int l1;
	int l2;

	l1 = 0;
	l2 = 0;
	while (*s1)
	{
		++l1;
		++s1;
	}
	while (*s2)
	{
		++l2;
		++s2;
	}
	return (l1 - l2);
}

int	main(void)
{	
	printf("%d\n", ft_strcmp("qwerty", "qwerty"));
	return (0);
}
