/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** my_button
*/

#include "../include/my.h"

void init_button(button_t *button)
{
    button->pos[2].x = 475;
    button->pos[2].y = 350;
    button->size[2].x = 100;
    button->size[2].y = 50;
    button->rect[0] = sfRectangleShape_create();
    sfRectangleShape_setPosition(button->rect[0], button->pos[2]);
    sfRectangleShape_setSize(button->rect[0], button->size[2]);
    sfRectangleShape_setFillColor(button->rect[0], sfBlack);
    sfRectangleShape_setOutlineColor(button->rect[0], sfGreen);
    sfRectangleShape_setOutlineThickness(button->rect[0], 3);
}

void init_button2(button_t *button)
{
    button->pos[1].x = 475;
    button->pos[1].y = 500;
    button->size[1].x = 100;
    button->size[1].y = 50;
    button->rect[1] = sfRectangleShape_create();
    sfRectangleShape_setPosition(button->rect[1], button->pos[1]);
    sfRectangleShape_setSize(button->rect[1], button->size[1]);
    sfRectangleShape_setFillColor(button->rect[1], sfWhite);
    sfRectangleShape_setOutlineColor(button->rect[1], sfGreen);
    sfRectangleShape_setOutlineThickness(button->rect[1], 3);
}

void print_hello(void)
{
    write(1, "Hello", 5);
}

int button_is_clicked2(button_t *button, sfVector2i click_pos, game_t *game)
{
    button->pos[1].x = 475;
    button->pos[1].y = 500;
    button->size[1].x = 100;
    button->size[1].y = 50;
    if (click_pos.x >= button->pos[1].x && click_pos.x \
    <= button->pos[1].x + button->size[1].x) {
        if (click_pos.y >= button->pos[1].y && click_pos.y \
        <= button->pos[1].y + button->size[1].y) {
            result_click1(game);
        }
    }
    return 0;
}

int button_is_clicked(button_t *button, sfVector2i click_pos, \
game_t *game, objet_t *objet)
{
    mobs_t mobs = init_mobs();
    button->pos[2].x = 475;
    button->pos[2].y = 350;
    button->size[2].x = 100;
    button->size[2].y = 50;
    if (click_pos.x >= button->pos[2].x && click_pos.x \
    <= button->pos[2].x + button->size[2].x) {
        if (click_pos.y >= button->pos[2].y && click_pos.y \
        <= button->pos[2].y + button->size[2].y) {
        result_click2(game, objet, button, &mobs);
        }
    }
    return 0;
}
