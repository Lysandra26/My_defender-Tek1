/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** my_strcmp
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (1) {
        if (s1[i] > s2[i])
            return 1;
        if (s1[i] < s2[i])
            return -1;
        if (s1[i] == '\0')
            return 0;
        i++;
    }
}
