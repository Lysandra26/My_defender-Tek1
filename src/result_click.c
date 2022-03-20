/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** result_click
*/

#include "../include/my.h"

void result_click1(game_t *game)
{
    if (game->event.type == sfEvtMouseButtonPressed) {
        sfRenderWindow_close(game->window);
    }
}

void result_click2(game_t *game, objet_t *objet, \
button_t *button, mobs_t *mobs)
{
    if (game->event.type == sfEvtMouseButtonPressed) {
        sfMusic_destroy(objet->music[0]);
        drawscene_game(objet, game, button, mobs);
    }
}
