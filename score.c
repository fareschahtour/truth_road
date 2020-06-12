#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "decla.h"

int fix=0;
void init_vie(GAME *game)
{
game->vie.pos_vie[0].x = 400;
game->vie.pos_vie[0].y = 30;

game->vie.vie[0] = IMG_Load("vie/1.png");
game->vie.vie[1] = IMG_Load("vie/2.png");
game->vie.vie[2] = IMG_Load("vie/3.png");

game->vie.i=2;
}



void update_vie(GAME *game)
{
  if (collisionmap(game))
if(game->vie.i>0 && !fix)  
{fix=1;game->vie.i-=1;}
else
fix=0;
}

void display_vie(GAME *game)
{

game->vie.pos_vie[0].x = 700;
game->vie.pos_vie[0].y = 30;
SDL_BlitSurface(game->vie.vie[game->vie.i],NULL,game->ecran,&game->vie.pos_vie[0]);

} 

