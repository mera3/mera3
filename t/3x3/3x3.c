/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3x3.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyahaira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 01:44:42 by yyahaira          #+#    #+#             */
/*   Updated: 2020/10/05 17:08:16 by yyahaira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>  // Для printf
#include <string.h> // Для strncat

int main (void)
{    
   // Массивы в которые добавляется строка
   char src1[10]="000";
   char src2[10]="000";
   // Добавляемая строка
   char app[10]="12345";

   // Вывод добавляемой строки
   printf ("app:  %s\n",app);

   // Добавление строки app в строку src1, но не более трех символов
   strncat (src1, app, 3);
   // Вывод результата
   printf ("src1: %s\n", src1);

   // Добавление строки app в строку src2, но не более семи символов
   strncat (src2, app, 4);
   // Вывод результата
   printf ("src2: %s\n",src2);
   return (0);
}
