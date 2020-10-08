/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2x8.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyahaira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 17:24:16 by yyahaira          #+#    #+#             */
/*   Updated: 2020/10/04 18:37:17 by yyahaira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowupcase(char *str)
{
	while (*str)
	{
		if (*str > 96 && *str < 123)
			*str = *str - 32;
			else if (*str > 64 && *str < 91)
				*str = *str + 32;	
		++str;
	}
	return (str);
}

int		main(void)
{
	char w[] = "ASDasdzxwZX123456@#$%^&*C";

	ft_strlowupcase(w);
	printf("%s\n", w);
	return (0);
}
