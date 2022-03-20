/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_
    #include <stdarg.h>
    #include <stdio.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <unistd.h>
    #include <assert.h>
    #include <string.h>
    #include <dirent.h>
    #include <stdlib.h>
    #include <pwd.h>
    #include <errno.h>
    #include <fcntl.h>
    #include <SFML/Graphics.h>
    #include <SFML/System.h>
    #include <SFML/Audio.h>
    #include "stdio.h"

typedef struct game_s {
    sfRenderWindow *window;
    sfEvent event;
    sfTime time;
    float seconds;
} game_t;

typedef struct button_s {
    sfRectangleShape *rect[10];
    sfCircleShape *rectt[10];
    int height;
    int width;
    sfVector2f pos[10];
    sfVector2f posi[10];
    sfVector2f size[10];
    sfVector2f sizei[10];
} button_t;

typedef struct objet_s {
    sfSprite *bg_sprites[1];
    sfTexture *bg_textures[1];
    sfSprite *tw_sprites[8];
    sfTexture *tw_textures[8];
    sfIntRect *rect;
    sfMusic *music[1];
    sfSprite *p_sprite[8];
    sfTexture *p_texture[8];
    sfVector2f pos[2];
} objet_t;

typedef struct mobs_s {
    sfIntRect rect1;
    sfSprite *dn_sprites[5];
    sfTexture *dn_textures[5];
    sfVector2f pos[5];
    sfClock *clock;
    sfTime time;
    float seconds;
    int offset;
    int max_value;
} mobs_t;

//LIB
void my_putchar(char c);
int my_putstr(char const *str);
int my_strcmp(char const *s1, char const *s2);
char *my_itoa(int nb);

//SRC
// for the menu
void my_destroy_menu(objet_t *objet);
void my_back_menu(objet_t *objet);
void init_button(button_t *button);
void init_button2(button_t *button);
int button_is_clicked(button_t *button, sfVector2i click_pos, \
game_t *game, objet_t *objet);
int button_is_clicked2(button_t *button, sfVector2i click_pos, game_t *game);
void my_menu_buttons(button_t *button);
int drawscene_menu(objet_t *objet, game_t *game, button_t *button);
void my_music(objet_t *objet);
void while_open_menu(game_t *game, button_t *button, objet_t *objet);
void result_click1(game_t *game);
void result_click2(game_t *game, objet_t *objet, \
button_t *button, mobs_t *mobs);

// for the game
void my_destroy_game(objet_t *objet);
void my_back_game(objet_t *objet);
int drawscene_game(objet_t *objet, game_t *game, \
button_t *button, mobs_t *mobs);
void my_music2(objet_t *objet);
void while_open_game(game_t *game, objet_t *objet, \
button_t *button, mobs_t *mobs);
void menu_tower(button_t *button);
void my_game_buttons(button_t *button);
void block_lifemoney(button_t *button);
int display_money(game_t *game);
int number_life(game_t *game);
void create_towers_menu(objet_t *objet);
int display_money_tower(game_t *game);
void init_sprite(mobs_t *mobs);
void move_rect(sfSprite *sp, int offset, int max_value);
int update_clock(mobs_t *mobs);
void create_emp(objet_t *objet);
void my_draw_menu_pause(game_t *game, objet_t *objet);
void create_button_pause_menu(objet_t *objet);
void my_menu_pause_buttons(game_t *game, objet_t *objet);
mobs_t init_mobs(void);
void move_dino(mobs_t *mobs);
void go_up(mobs_t *mobs);
void go_down(mobs_t *mobs);
void go_left(mobs_t *mobs);
void go_right(mobs_t *mobs);
void move_dino2(mobs_t *mobs);
void move_dino3(mobs_t *mobs);

// for everythings
void analyse_events(game_t *game, objet_t *objet);
void my_help(void);
void my_number_score(game_t *game);
int main_start_back(game_t *game, button_t *button, objet_t *objet);
int my_score(game_t *game);
int my_title(game_t *game);
sfIntRect texture_rect(void);
void my_destroy_everything(objet_t *objet, mobs_t *mobs);
game_t *create_mygame(int width, int height, char *name);
void free_all(game_t *game, objet_t *objet, button_t *button, mobs_t *mobs);

#endif /* !MY_H_ */
