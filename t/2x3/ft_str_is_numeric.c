/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2x3.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyahaira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 22:31:09 by yyahaira          #+#    #+#             */
/*   Updated: 2020/10/03 23:17:29 by yyahaira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		return (0);
		++i;
	}
	return (1);
}

int main(void)
{
	printf ("%d\n", ft_str_is_numeric("qwe123qwe123"));
	
	return (0);
}
