/*
** EPITECH PROJECT, 2021
** my_music
** File description:
** ...
*/

#include "../include/my.h"

void my_music(objet_t *objet)
{
    objet->music[0] = sfMusic_createFromFile("./include/my_music.ogg");
    sfMusic_setLoop(objet->music[0], sfTrue);
    sfMusic_play(objet->music[0]);
}

void my_music2(objet_t *objet)
{
    objet->music[1] = sfMusic_createFromFile("./include/music2.ogg");
    sfMusic_setLoop(objet->music[1], sfTrue);
    sfMusic_play(objet->music[1]);
}
