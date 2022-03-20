/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** my_move
*/

#include "../include/my.h"

void init_sprite(mobs_t *mobs)
{
    mobs->dn_textures[0] = sfTexture_createFromFile("./include/d1.png", NULL);
    mobs->dn_sprites[0] = sfSprite_create();
    sfSprite_setTexture(mobs->dn_sprites[0], mobs->dn_textures[0], sfTrue);
    sfSprite_setTextureRect(mobs->dn_sprites[0], mobs->rect1);
    sfSprite_setScale(mobs->dn_sprites[0], (sfVector2f){3, 3});
    sfSprite_setPosition(mobs->dn_sprites[0], mobs->pos[0]);
    sfTexture_setRepeated(mobs->dn_textures[0], sfTrue);
}

void move_rect(sfSprite *sp, int offset, int max_value)
{
    sfIntRect rect = sfSprite_getTextureRect(sp);
    sfSprite_setTextureRect(sp, (sfIntRect){rect.left + offset % max_value, \
    rect.top, rect.width, rect.height});
}

int update_clock(mobs_t *mobs)
{
    mobs->time = sfClock_getElapsedTime(mobs->clock);
    mobs->seconds = mobs->time.microseconds / 1000000.0;
    if (mobs->seconds > 0.07) {
        move_rect(mobs->dn_sprites[0], mobs->offset, 1920);
        move_dino(mobs);
        sfClock_restart(mobs->clock);
    }
    return (0);
}
