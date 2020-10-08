/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyahaira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 17:09:10 by yyahaira          #+#    #+#             */
/*   Updated: 2020/10/05 18:18:37 by yyahaira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int d;
	int s;

	d = 0;
	s = 0;
	while (dest[d] != '\0')
	{
		++d;
	}
	while (s < nb)
	{
		dest[d + s] = src[s];
		++s;
	}
	dest[d + s] = '\0';
	return (dest);
}

int		main(void)
{
	char a[20] = "000";
	char b[20] = " 1234567";
	ft_strncat(a, b, 6);
	printf("dest: %s\n", a);
	return (0);
}
