#pragma once
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80
#define PAUSE 112
#define ESC 27

#define MAP_ADJ_X 3
#define MAP_ADJ_Y 2
#define MAP_X 30
#define MAP_Y 20

typedef struct snake
{
	int x[100], y[100];
	int food_x, food_y;
	int bomb_x[100], bomb_y[100];
	int length;
	int speed;
	int score;
	int best_score;
	int last_score;
	int dir;
	int key;
	int status_on;
	int stage;
	int num_of_bomb;
}snake;

void gotoxy(int x, int y, char* s);
void title(struct snake *z);
void reset(struct snake *z);
void draw_map(void);
void move(struct snake *z);
void pause(struct snake *z);
void game_over(struct snake *z);
void food(struct snake *z);
void bomb(struct snake *z);
void status(struct snake *z);

