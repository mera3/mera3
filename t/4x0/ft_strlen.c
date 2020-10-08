/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyahaira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 22:29:18 by yyahaira          #+#    #+#             */
/*   Updated: 2020/10/05 22:41:38 by yyahaira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int l;

	l = 0;
	while (*str != '\0')
	{
		++l;
		++str;
	}
	return (l);
}

int	main(void)
{
	printf("%d\n", ft_strlen("qwerty"));
	return (0);
}
