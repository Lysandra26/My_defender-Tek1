/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** background
*/

#include "../include/my.h"

sfIntRect texture_rect(void)
{
    sfIntRect rect;
    rect.top = 0;
    rect.left = 0;
    rect.width = 620;
    rect.height = 360;
    return rect;
}

void my_back_menu(objet_t *objet)
{
    objet->bg_textures[0] = sfTexture_createFromFile("./include/b0.png", NULL);
    for (int i = 0; i < 1; i++) {
        objet->bg_sprites[i] = sfSprite_create();
    }
    for (int i = 0; i < 1; i++) {
        sfSprite_setScale(objet->bg_sprites[i], (sfVector2f){1.74, 2});
        sfSprite_setTextureRect(objet->bg_sprites[i], texture_rect());
    }
    for (int i = 0; i < 1; i++) {
        sfTexture_setRepeated(objet->bg_textures[i], sfTrue);
        sfSprite_setTexture(objet->bg_sprites[i],  \
        objet->bg_textures[i], sfTrue);
    }
}

void my_back_game(objet_t *objet)
{
    objet->bg_textures[1] = sfTexture_createFromFile("./include/b1.png", NULL);
    for (int i = 1; i < 2; i++) {
        objet->bg_sprites[i] = sfSprite_create();
    }
    for (int i = 1; i < 2; i++) {
        sfSprite_setScale(objet->bg_sprites[i], (sfVector2f){1.58, 1.45});
        sfSprite_setTextureRect(objet->bg_sprites[i], texture_rect());
    }
    for (int i = 1; i < 2; i++) {
        sfTexture_setRepeated(objet->bg_textures[i], sfTrue);
        sfSprite_setTexture(objet->bg_sprites[i],  \
        objet->bg_textures[i], sfTrue);
    }
}
