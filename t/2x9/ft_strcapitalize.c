/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2x8.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyahaira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 17:24:16 by yyahaira          #+#    #+#             */
/*   Updated: 2020/10/04 18:57:58 by yyahaira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	while (str[i])
	{
		if (str[0] > 96 && str[0] < 123)
			str[0] = str[0] - 32;
		else if (str[i] == 32)
			str[i+1] = str[i+1] - 32;
		++i;
	}
	return (str);
}

int		main(void)
{
	char w[] = ("salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un");

	ft_strcapitalize(w);
	printf("%s\n", w);
	return (0);
}
