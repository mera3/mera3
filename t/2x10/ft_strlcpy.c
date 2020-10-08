/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyahaira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 20:49:31 by yyahaira          #+#    #+#             */
/*   Updated: 2020/10/04 23:11:09 by yyahaira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	int l;

	i = 0;
	l = 0;
	while (i < size - 1)
	{
		dest[i] = src[i];
		++i;
	}
	dest[size - 1] = '\0';
	return (l);
}

int				main(void)
{
	char s[10] = "qwerty";
	char d[10] = "";
	ft_strlcpy(d, s, 3);
	printf("%s\n", d);
	printf("%s\n", s);
	printf("%u\n", ft_strlcpy(d, s, 2));
	return (0);
}
