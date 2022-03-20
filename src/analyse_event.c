/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** analyse_events
*/

#include "../include/my.h"

void analyse_events(game_t *game, objet_t *objet)
{
    while (sfRenderWindow_pollEvent(game->window, &game->event)) {
        if (game->event.type == sfEvtClosed) {
            sfRenderWindow_close(game->window);
        }
        if (game->event.type == sfEvtKeyPressed \
        && game->event.key.code == sfKeyEscape) {
            my_draw_menu_pause(game, objet);
        }
    }
}
