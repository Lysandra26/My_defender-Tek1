/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** my_defender
*/

#include "../include/my.h"

void while_open_menu(game_t *game, button_t *button, objet_t *objet)
{
    while (sfRenderWindow_isOpen(game->window)) {
        sfRenderWindow_drawSprite(game->window, objet->bg_sprites[0], NULL);
        my_title(game);
        sfRenderWindow_drawRectangleShape(game->window, button->rect[0], NULL);
        sfRenderWindow_drawRectangleShape(game->window, button->rect[1], NULL);
        sfRenderWindow_display(game->window);
        analyse_events(game, objet);
        button_is_clicked(button, \
        sfMouse_getPositionRenderWindow(game->window), game, objet);
        button_is_clicked2(button, \
        sfMouse_getPositionRenderWindow(game->window), game);
    }
}

void while_open_game(game_t *game, objet_t *objet, \
button_t *button, mobs_t *mobs)
{
    while (sfRenderWindow_isOpen(game->window)) {
        sfRenderWindow_display(game->window);
        sfRenderWindow_drawSprite(game->window, objet->bg_sprites[1], NULL);
        sfRenderWindow_drawRectangleShape(game->window, button->rect[3], NULL);
        sfRenderWindow_drawRectangleShape(game->window, button->rect[4], NULL);
        for (int i = 0; i < 8; i++)
            sfRenderWindow_drawSprite(game->window, \
            objet->tw_sprites[i], NULL);
        sfRenderWindow_drawSprite(game->window, mobs->dn_sprites[0], NULL);
        update_clock(mobs);
        my_score(game);
        my_number_score(game);
        display_money(game);
        number_life(game);
        display_money_tower(game);
        analyse_events(game, objet);
    }
}

game_t *create_mygame(int width, int height, char *name)
{
    game_t *game = malloc(sizeof(game_t));
    sfVideoMode mode = {width, height, 32};
    game->window = sfRenderWindow_create(mode, name, sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(game->window, 60);
    return (game);
}

int main(int argc, char **argv)
{
    objet_t *objet = malloc(sizeof(objet_t));
    game_t *game = create_mygame(1080, 720, "My_Defender");
    button_t *button = malloc(sizeof(button_t));
    if (argc > 2)
        return 84;
    if (argc == 2) {
        if (my_strcmp(argv[1], "-h") == 0) {
            my_help();
        }
    } else
        drawscene_menu(objet, game, button);
    return 0;
}
