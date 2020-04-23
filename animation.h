#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#define maxFramesHero  5
#define maxStatesHero  2
#define maxChar 10



typedef struct 
{
	SDL_Surface *spriteHero;
	SDL_Rect frameHero[maxStatesHero][maxFramesHero];
}animationHero;



typedef struct 
{
	
	SDL_Rect positionEntity;
	char state[maxChar];

}entity;


SDL_Surface *ecran;


void initAnimationHERO(animationHero *animationHero);
void animateHero(entity *hero,animationHero *animationHero);

#endif
