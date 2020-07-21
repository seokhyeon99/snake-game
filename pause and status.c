#include "header.h"



void pause(struct snake *z) {
	while (1) {
		if (z->key == PAUSE) {
			gotoxy(MAP_ADJ_X + (MAP_X / 2) - 9, MAP_ADJ_Y, "< PAUSE : PRESS ANY KEY TO RESUME > ");
			Sleep(400);
			gotoxy(MAP_ADJ_X + (MAP_X / 2) - 9, MAP_ADJ_Y, "                                    ");
			Sleep(400);
		}
		else {
			draw_map();
			return;
		}
		if (kbhit()) {

			do {
				z->key = getch();
			} while (z->key == 224);
		}

	}
}

void status(struct snake *z) {
	gotoxy(MAP_ADJ_X + MAP_X + 1, MAP_ADJ_Y, "head= ");
	printf("%2d,%2d", z->x[0], z->y[0]);
	gotoxy(MAP_ADJ_X + MAP_X + 1, MAP_ADJ_Y + 1, "food= ");
	printf("%2d,%2d", z->food_x, z->food_y);
	gotoxy(MAP_ADJ_X + MAP_X + 1, MAP_ADJ_Y + 2, "leng= ");
	printf("%2d", z->length);
	gotoxy(MAP_ADJ_X + MAP_X + 1, MAP_ADJ_Y + 3, "key= ");
	printf("%3d", z->key);
	gotoxy(MAP_ADJ_X + MAP_X + 1, MAP_ADJ_Y + 4, "spd= ");
	printf("%3d", z->speed);
	gotoxy(MAP_ADJ_X + MAP_X + 1, MAP_ADJ_Y + 6, "score= ");
	printf("%3d", z->score);
}