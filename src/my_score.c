/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** my_score
*/

#include "../include/my.h"

int my_score(game_t *game)
{
    sfFont *font;
    sfText *text;

    font = sfFont_createFromFile("./include/silver.ttf");
    if (!font)
        return EXIT_FAILURE;
    text = sfText_create();
    sfText_setString(text, "score :");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 50);
    sfText_setColor(text, sfWhite);
    sfText_setPosition(text, (sfVector2f){850, 10});
    sfRenderWindow_drawText(game->window, text, NULL);
    return 0;
}

void my_number_score(game_t *game)
{
    sfText *text;
    sfFont *font;
    int par = 0;
    static int score = 0;

    if (par == 1) {
        score = 0;
        return;
    }
    font = sfFont_createFromFile("./include/silver.ttf");
    text = sfText_create();
    sfText_setString(text, my_itoa(score));
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 50);
    sfText_setPosition(text, (sfVector2f){967, 10});
    sfRenderWindow_drawText(game->window, text, NULL);
    score++;
}

int my_title(game_t *game)
{
    sfFont *font;
    sfText *text;

    font = sfFont_createFromFile("./include/silver.ttf");
    text = sfText_create();
    sfText_setString(text, "MY DEFENDER");
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, 150);
    sfText_setColor(text, sfWhite);
    sfText_setPosition(text, (sfVector2f){275, 100});
    sfRenderWindow_drawText(game->window, text, NULL);
    return 0;
}
