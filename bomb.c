#include "header.h"

void bomb(struct snake *z) {

	int i;

	int bomb_crush_on = 0;
	int r = 0;
	gotoxy(MAP_ADJ_X, MAP_ADJ_Y + MAP_Y, " YOUR SCORE: ");
	printf("%3d, LAST SCORE: %3d, BEST SCORE: %3d", z->score, z->last_score, z->best_score);

	for (int p = 0; p < z->num_of_bomb; p++) {

		gotoxy(MAP_ADJ_X + z->bomb_x[p], MAP_ADJ_Y + z->bomb_y[p], " ");
		z->bomb_x[p] = 0;
		z->bomb_y[p] = 0;
	}

	while (1) {

		bomb_crush_on = 0;
		srand((unsigned)time(NULL) + r);


		for (int k = 0; k < z->num_of_bomb; k++) {

			z->bomb_x[k] = (rand() % (MAP_X - 2)) + 1;
			z->bomb_y[k] = (rand() % (MAP_Y - 2)) + 1;

			for (i = 0; i < z->length; i++) {
				if (z->bomb_x[k] == z->x[i] && z->bomb_y[k] == z->y[i]) {
					bomb_crush_on = 1;
					r++;
					break;
				}
				if (z->food_x == z->bomb_x[k] && z->food_y == z->bomb_y[k]) {
					bomb_crush_on = 1;
					r++;
					break;
				}

				if (z->bomb_x[k] == z->bomb_x[k + 1] && z->bomb_y[k] == z->bomb_y[k + 1]) {
					bomb_crush_on = 1;
					r++;
					break;
				}
			}

		}

		if (bomb_crush_on == 1) continue;

		for (int k = 0; k < z->num_of_bomb; k++) {
			gotoxy(MAP_ADJ_X + z->bomb_x[k], MAP_ADJ_Y + z->bomb_y[k], "¨ä");
		}
		z->speed += 3;
		break;
	}

}