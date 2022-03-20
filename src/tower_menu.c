/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** tower_menu
*/

#include "../include/my.h"

void menu_tower(button_t *button)
{
    button->pos[3].x = 50;
    button->pos[3].y = 450;
    button->size[3].x = 300;
    button->size[3].y = 200;
    button->rect[3] = sfRectangleShape_create();
    sfRectangleShape_setPosition(button->rect[3], button->pos[3]);
    sfRectangleShape_setSize(button->rect[3], button->size[3]);
    sfRectangleShape_setFillColor(button->rect[3], sfBlack);
    sfRectangleShape_setOutlineColor(button->rect[3], sfGreen);
    sfRectangleShape_setOutlineThickness(button->rect[3], 3);
}

void block_lifemoney(button_t *button)
{
    button->pos[4].x = 825;
    button->pos[4].y = 30;
    button->size[4].x = 225;
    button->size[4].y = 100;
    button->rect[4] = sfRectangleShape_create();
    sfRectangleShape_setPosition(button->rect[4], button->pos[4]);
    sfRectangleShape_setSize(button->rect[4], button->size[4]);
    sfRectangleShape_setFillColor(button->rect[4], sfBlack);
    sfRectangleShape_setOutlineColor(button->rect[4], sfGreen);
    sfRectangleShape_setOutlineThickness(button->rect[4], 3);
}
