/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** my_life
*/

#include "../include/my.h"

int number_life(game_t *game)
{
    sfFont *font;
    sfText *text;

    font = sfFont_createFromFile("./include/silver.ttf");
    if (!font)
        return EXIT_FAILURE;
    text = sfText_create();
    sfText_setString(text, "PV 100");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 50);
    sfText_setColor(text, sfWhite);
    sfText_setPosition(text, (sfVector2f){850, 40});
    sfRenderWindow_drawText(game->window, text, NULL);
    return 0;
}

int display_money(game_t *game)
{
    sfFont *font;
    sfText *text;

    font = sfFont_createFromFile("./include/silver.ttf");
    if (!font)
        return EXIT_FAILURE;
    text = sfText_create();
    sfText_setString(text, "$ 200");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 50);
    sfText_setColor(text, sfWhite);
    sfText_setPosition(text, (sfVector2f){850, 70});
    sfRenderWindow_drawText(game->window, text, NULL);
    return 0;
}

int display_money_tower(game_t *game)
{
    sfFont *font;
    sfText *text;

    font = sfFont_createFromFile("./include/silver.ttf");
    if (!font)
        return EXIT_FAILURE;
    text = sfText_create();
    sfText_setString(text, "80  130   130   200");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 50);
    sfText_setColor(text, sfWhite);
    sfText_setPosition(text, (sfVector2f){70, 550});
    sfRenderWindow_drawText(game->window, text, NULL);
    return 0;
}
