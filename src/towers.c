/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** towers
*/

#include "../include/my.h"

void create_towers_menu(objet_t *objet)
{
    objet->tw_textures[0] = sfTexture_createFromFile("./include/t1.png", NULL);
    objet->tw_textures[1] = sfTexture_createFromFile("./include/t2.png", NULL);
    objet->tw_textures[2] = sfTexture_createFromFile("./include/t3.png", NULL);
    objet->tw_textures[3] = sfTexture_createFromFile("./include/t4.png", NULL);
    for (int i = 0; i < 4; i++) {
        objet->tw_sprites[i] = sfSprite_create();
    }
    for (int i = 0; i < 4; i++) {
        sfSprite_setScale(objet->tw_sprites[i], (sfVector2f){2.5, 2.5});
        sfSprite_setTextureRect(objet->tw_sprites[i], texture_rect());
    }
    for (int i = 0; i < 4; i++) {
        sfTexture_setRepeated(objet->tw_textures[i], sfTrue);
        sfSprite_setTexture(objet->tw_sprites[i],  \
        objet->tw_textures[i], sfTrue);
    }
    sfSprite_setPosition(objet->tw_sprites[0], (sfVector2f){60, 470});
    sfSprite_setPosition(objet->tw_sprites[1], (sfVector2f){130, 475});
    sfSprite_setPosition(objet->tw_sprites[2], (sfVector2f){200, 465});
    sfSprite_setPosition(objet->tw_sprites[3], (sfVector2f){285, 461});
}

void create_emp(objet_t *objet)
{
    objet->tw_textures[4] = sfTexture_createFromFile \
    ("./include/em1.png", NULL);
    for (int i = 4; i < 8; i++)
        objet->tw_sprites[i] = sfSprite_create();
    for (int i = 4; i < 8; i++) {
        sfSprite_setScale(objet->tw_sprites[i], (sfVector2f){2.5, 2.5});
        sfSprite_setTextureRect(objet->tw_sprites[i], texture_rect());
    }
    for (int i = 4; i < 8; i++)
        sfSprite_setTexture(objet->tw_sprites[i], \
        objet->tw_textures[4], sfTrue);
    sfSprite_setPosition(objet->tw_sprites[4], (sfVector2f){500, 185});
    sfSprite_setPosition(objet->tw_sprites[5], (sfVector2f){315, 100});
    sfSprite_setPosition(objet->tw_sprites[6], (sfVector2f){695, 540});
    sfSprite_setPosition(objet->tw_sprites[7], (sfVector2f){500, 450});
}
