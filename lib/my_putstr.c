/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** my_putstr
*/

#include "../include/my.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i]) {
        my_putchar(str[i]);
        i++;
    }
    return 0;
}
