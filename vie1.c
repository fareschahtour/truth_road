#include <time.h>
#include "decla.h"
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include "SDL/SDL_mixer.h"

void int_score(GAME *game)
{
game->score.score=0 ;
game->score.pos_score.x=200;
game->score.pos_score.y=30;
}

void update_score (GAME *game)
{
game->score.score+=5 ;
}


void display_score(GAME *game)
{
//SDL_Surface *ecran=NULL;
SDL_init(SDL_INIT_VIDEO);
SDL_Surface *text=NULL;

//SDL_Rect pos_text ;
//pos_text.x=0;
//pos_text.y=0;

TTF_Font *police=NULL ;

SDL_Color policeblanche ={255,255,255};

char score[20] ;


police=TTF_OpenFont("angelina.TTF",25);

//TTF_SetFontStyle (police,TTF_STYLE_BOLD|TTF_STYLE_UNDERLINE) ;

sprintf(score,"score= %d",game->score.score);

text=TTF_RenderText_Blended(police,score,policeblanche);

SDL_BlitSurface(text,NULL,game->ecran,&game->score.pos_score);


SDL_FreeSurface(text);



TTF_CloseFont(police);


}

void free_score(GAME *game)
{
game->score.score =0 ;
}
