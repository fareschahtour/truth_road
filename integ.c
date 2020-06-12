/*#include "stage1.h"
#include "option.h"
#include "sound.h"
#include "fonction.h"
#include "enigme.h"
#define TEMPS 30*/
void main() {


 
while (continuer)
    	{
    	sprintf(secondes, "%d",tsec);
    	surfacesecondes= TTF_RenderUTF8_Solid(fonts, secondes, couleur);
    	sprintf(minutes, "%d",tmin);
    	strcat(minutes,":");
    	surfaceminutes=  TTF_RenderUTF8_Solid(fonts, minutes, couleur);
    	sprintf(chhp, "%d",hp);
        vie= TTF_RenderText_Blended(fonts,chhp, couleur);
        sprintf(scr,"%d",cmpsc);
        scoreint=TTF_RenderText_Blended(fonts,scr, couleur);
        	while (SDL_PollEvent(&event))
       		switch(event.type)
        	{
        		
       			case SDL_QUIT:
            		(*continuer) = 0;
            		break;
            		case SDL_VIDEORESIZE:
ecran = SDL_SetVideoMode(1920,1080,32,SDL_HWSURFACE|SDL_DOUBLEBUF|SDL_RESIZABLE);
    				break;
            		case SDL_KEYDOWN:
            		switch (event.key.keysym.sym)
            		{	
				case SDLK_TAB:
				option(ecran,effet,effet2,musique,mute,continuer,posvolb);
				break;
				
				case SDLK_n:
roto_zoom();
				break;
				
				case SDLK_ESCAPE:							Pause1();            		break;


            		}
            		break;
            		case SDL_MOUSEBUTTONDOWN:
            		//souri
		if (event.button.button == SDL_BUTTON_RIGHT)
			{ 
          		souri=event.button.x;
			posactu=poshero.x;
			mouvemmentsouri=1;
			}
			break;
		}
                        //clavier
		if(keystates == SDL_GetKeyState(NULL))
		{
		        if(directionhero==1)
		        animation();
		        if(directionhero==2)
		        animation();
		}
		pospetithero.x=((-posback.x*500) / 7500) + 800;
		animation();
		
		if(keystates[SDLK_b])
		{
			boucle=0;
		}
		if(keystates[SDLK_k])//jump
		{
			if(jump==0)
			{
			        if(directionhero==1)
					heroactu=jumpr;
					if(directionhero==2)
					heroactu=jumpl;
					posans=poshero.y;
            		jump=1;
			}

		}
		if(keystates[SDLK_d])//right
		{
			        directionhero=1;
            			animation();
            			if (coll==0)
            			{
            			scrolling();
            			}
            			else
            			{
            				poshero.x+=speed;
            			}
					
		}
		if(keystates[SDLK_q])//left
		{
            			directionhero=2;        			
            			animation();
            			if (coll==0)
            			{
            			scrolling();
            			}
            			else
            			{
            				poshero.x-=speed;
            			}
		
		}
if (collision_parfaite)
 {printf("il y a collision");
  etat=enigme();
 }
if (etat==enigme)
{initialiser_enigme(enigme e);
 afficher_enigme(enigme e; SDL_Surface *screen);
 T=calcul_temps();
 if(T<30)
  {if(resolution_enigme==1)
    reponse=1;
   else
    reponse=-1;
  }
 else
  reponse=-1;
 if(reponse!=0)
  {update_score();
   afficher_score();
 if((game.score<=0)||(game.vie==0))
  {printf("gamr_over");
   etat=game_over();
  }
 etat=game();
 reponse=0;
}
else if (etat=game_over())
{blit_gameover();
 etat=menu();
}
}//fin tant que
 SDL_FreeSurface(..);
 SDL_Quit();
}
