/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** movement
*/

#include "../include/my.h"

void go_up(mobs_t *mobs)
{
    sfSprite_move(mobs->dn_sprites[0], (sfVector2f){0, -5});
}

void go_down(mobs_t *mobs)
{
    sfSprite_move(mobs->dn_sprites[0], (sfVector2f){0, 5});
}

void go_left(mobs_t *mobs)
{
    sfSprite_move(mobs->dn_sprites[0], (sfVector2f){-5, 0});
}

void go_right(mobs_t *mobs)
{
    sfSprite_move(mobs->dn_sprites[0], (sfVector2f){5, 0});
}
