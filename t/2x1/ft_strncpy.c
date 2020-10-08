/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2x1.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyahaira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 20:20:00 by yyahaira          #+#    #+#             */
/*   Updated: 2020/10/03 21:21:21 by yyahaira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		write(1, str++, 1);
	}
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	char sr[30] = "sdgsdgsfuq";
	char ds[30] = "";
	ft_strncpy(ds, sr, 5);
	printf("%s\n", ds);
	ft_putstr(ds);
	return (0);
}
