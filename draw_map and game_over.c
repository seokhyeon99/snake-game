#include "header.h"

void draw_map(void) {
	int i, j;
	for (i = 0; i<MAP_X; i++) {
		gotoxy(MAP_ADJ_X + i, MAP_ADJ_Y, "бс");
	}
	for (i = MAP_ADJ_Y + 1; i<MAP_ADJ_Y + MAP_Y - 1; i++) {
		gotoxy(MAP_ADJ_X, i, "бс");
		gotoxy(MAP_ADJ_X + MAP_X - 1, i, "бс");
	}
	for (i = 0; i<MAP_X; i++) {
		gotoxy(MAP_ADJ_X + i, MAP_ADJ_Y + MAP_Y - 1, "бс");
	}
}

void game_over(struct snake *z) {
	z->stage = 1;
	z->num_of_bomb = 1;
	gotoxy(MAP_ADJ_X + (MAP_X / 2) - 6, MAP_ADJ_Y + 5, "+----------------------+");
	gotoxy(MAP_ADJ_X + (MAP_X / 2) - 6, MAP_ADJ_Y + 6, "|      GAME OVER..     |");
	gotoxy(MAP_ADJ_X + (MAP_X / 2) - 6, MAP_ADJ_Y + 7, "+----------------------+");
	gotoxy(MAP_ADJ_X + (MAP_X / 2) - 6, MAP_ADJ_Y + 8, " YOUR SCORE : ");
	printf("%d", z->last_score = z->score);

	gotoxy(MAP_ADJ_X + (MAP_X / 2) - 7, MAP_ADJ_Y + 12, " Press any keys to restart.. ");

	if (z->score>z->best_score) {
		z->best_score = z->score;
		gotoxy(MAP_ADJ_X + (MAP_X / 2) - 4, MAP_ADJ_Y + 10, "б┘ BEST SCORE б┘");
	}
	Sleep(500);
	while (kbhit()) getch();
	z->key = getch();
	title(z);
}