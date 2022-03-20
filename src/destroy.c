/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** my_destroy and my_create
*/

#include "../include/my.h"

void my_destroy_menu(objet_t *objet)
{
    sfTexture_destroy(objet->bg_textures[0]);
    sfSprite_destroy(objet->bg_sprites[0]);
    sfMusic_destroy(objet->music[0]);
}

void my_destroy_game(objet_t *objet)
{
    sfTexture_destroy(objet->bg_textures[1]);
    sfSprite_destroy(objet->bg_sprites[1]);
    sfMusic_destroy(objet->music[1]);
}

void my_destroy_everything(objet_t *objet, mobs_t *mobs)
{
    for (int i = 0; i < 2; i++) {
        sfTexture_destroy(objet->bg_textures[i]);
        sfSprite_destroy(objet->bg_sprites[i]);
    }
    for (int i = 0; i < 8; i++) {
        sfTexture_destroy(objet->tw_textures[i]);
        sfSprite_destroy(objet->tw_sprites[i]);
    }
    for (int i = 0; i < 9; i++) {
        sfTexture_destroy(objet->p_texture[i]);
        sfSprite_destroy(objet->p_sprite[i]);
    }
    sfTexture_destroy(mobs->dn_textures[1]);
    sfSprite_destroy(mobs->dn_sprites[1]);
    sfMusic_destroy(objet->music[0]);
    sfMusic_destroy(objet->music[1]);
}
