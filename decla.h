typedef struct vie
{
SDL_Surface *vie[3];
SDL_Rect pos_vie[1];
int i;
}Vie;
typedef struct score
{
int score ;
SDL_Rect pos_score ;
}Score ;
typedef struct GAME
{
/*SDL_Surface *ecran;
personnage perso;
monstre monstre;
// pillule pillule;
background BG, BGcollision;*/
Score score;
Vie vie;
//int *test;
//SDL_Rect position_background;
}GAME;
