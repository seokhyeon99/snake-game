#include "header.h"

void reset(struct snake *z) {
	int i;
	system("cls");
	draw_map();
	while (kbhit()) getch();

	switch (z->stage)
	{
	case 1:
		z->dir = LEFT;
		z->speed = 100;
		z->length = 5;
		z->score = 0;
		break;

	case 2:
		z->num_of_bomb = 2;
		z->dir = LEFT;
		z->speed = 80;
		break;

	case 3:
		z->num_of_bomb = 3;
		z->dir = LEFT;
		z->speed = 60;
	}
	food(z);
	bomb(z);

	for (i = 0; i<z->length; i++) {
		z->x[i] = MAP_X / 2 + i;
		z->y[i] = MAP_Y / 2;
		gotoxy(MAP_ADJ_X + z->x[i], MAP_ADJ_Y + z->y[i], "¤·");
	}
	gotoxy(MAP_ADJ_X + z->x[0], MAP_ADJ_Y + z->y[0], "¤¾");

}
