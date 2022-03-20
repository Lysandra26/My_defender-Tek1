/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** my_scene2
*/

#include "../include/my.h"

int drawscene_menu(objet_t *objet, game_t *game, button_t *button)
{
    my_music(objet);
    my_back_menu(objet);
    my_menu_buttons(button);
    while_open_menu(game, button, objet);
    return 0;
}

int drawscene_game(objet_t *objet, game_t *game, \
    button_t *button, mobs_t *mobs)
{
    my_music2(objet);
    my_back_game(objet);
    init_sprite(mobs);
    my_game_buttons(button);
    create_towers_menu(objet);
    create_emp(objet);
    while_open_game(game, objet, button, mobs);
    return 0;
}
