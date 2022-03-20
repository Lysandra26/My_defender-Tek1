/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** my_filer
*/

#include "../include/my.h"

void my_menu_buttons(button_t *button)
{
    init_button(button);
    init_button2(button);
}

void my_menu_pause_buttons(game_t *game, objet_t *objet)
{
    my_draw_menu_pause(game, objet);
}

void my_game_buttons(button_t *button)
{
    menu_tower(button);
    block_lifemoney(button);
}

mobs_t init_mobs(void)
{
    mobs_t mobs = {
        .rect1.height = 24,
        .rect1.width = 25,
        .rect1.left = 96,
        .rect1.top = 0,
        .pos[0] = {50, 50},
        .pos[1] = {-25, 50},
        .pos[2] = {0, 50},
        .clock = sfClock_create(),
        .offset = 24,
    };
    return (mobs);
}

void free_all(game_t *game, objet_t *objet, button_t *button, mobs_t *mobs)
{
    free(game);
    free(objet);
    free(button);
    free(mobs);
}
