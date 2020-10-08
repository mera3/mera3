/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyahaira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 01:04:09 by yyahaira          #+#    #+#             */
/*   Updated: 2020/10/05 16:10:12 by yyahaira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int d;
	int s;

	d = 0;
	s = 0;
	while (dest[d] != '\0')
	{
		++d;
	}
	while (src[s] != 0)
	{
		dest[d + s] = src[s];
		++s;
	}
	dest[d + s] = '\0';
	return (dest);
}

int		main(void)
{
	char q[50] = " ASadsf :D";
	char w[50] = " qwe";
	ft_strcat(q, w);
	printf("%s\n", q);
	return (0);
}
