/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** my_move_dino
*/

#include "../include/my.h"

void move_dino(mobs_t *mobs)
{
    sfVector2f pos2 = sfSprite_getPosition(mobs->dn_sprites[0]);
    if (pos2.x < 250 && pos2.y == 50) {
        if (pos2.x != 220)
            go_right(mobs);
    }
    if (pos2.x == 220 && pos2.y != 170)
        go_down(mobs);
    if (pos2.x < 410 && pos2.y == 170) {
        if (pos2.x != 410)
        go_right(mobs);
    }
    if (pos2.x == 410 && pos2.y != 55)
        go_up(mobs);
    if (pos2.x >= 300 && pos2.y == 55) {
        if (pos2.x != 600)
            go_right(mobs);
    }
    move_dino2(mobs);
}

void move_dino2(mobs_t *mobs)
{
    sfVector2f pos3 = sfSprite_getPosition(mobs->dn_sprites[0]);
    if (pos3.x == 600 && pos3.y < 350) {
        if (pos3.y != 320)
            go_down(mobs);
    }
    if (pos3.x != 415 && pos3.y == 320)
        go_left(mobs);
    if (pos3.x == 415 && pos3.y > 300) {
        if (pos3.y != 585)
        go_down(mobs);
    }
    if (pos3.x > 300 && pos3.y == 585) {
        if (pos3.x != 610)
            go_right(mobs);
    }
    move_dino3(mobs);
}

void move_dino3(mobs_t *mobs)
{
    sfVector2f pos4 = sfSprite_getPosition(mobs->dn_sprites[0]);
    if (pos4.x == 610 && pos4.y != 470)
        go_up(mobs);
    if (pos4.x > 600 && pos4.y == 470) {
        if (pos4.x != 790)
            go_right(mobs);
    }
    if (pos4.x == 790 && pos4.y != 580)
        go_down(mobs);
    if (pos4.x >= 790 && pos4.y == 580) {
        if (pos4.x != 1070)
            go_right(mobs);
    }
    if (pos4.x == 1070 && pos4.y == 580) {
        sfSprite_setPosition(mobs->dn_sprites[0], (sfVector2f){0, 50});
    }
}
