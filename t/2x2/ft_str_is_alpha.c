/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2x2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyahaira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 21:22:00 by yyahaira          #+#    #+#             */
/*   Updated: 2020/10/03 22:29:36 by yyahaira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
			return (0);
		++i;
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_str_is_alpha("ABabczxCZX"));
	return (0);
}
