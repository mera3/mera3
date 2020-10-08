/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyahaira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 00:43:48 by yyahaira          #+#    #+#             */
/*   Updated: 2020/10/05 00:57:22 by yyahaira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;
	
	i = 0;
	if (s1[i] != 0 && s2[i] != 0)
		return (s1[i] - s2[i]);
	++i;
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char q[] = "qwerty";
	char w[] = "qqwertyu";
	printf("%d\n", ft_strcmp(w, q));
	return (0);
}
