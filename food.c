#include "header.h"

void food(struct snake *z) {
	int i;

	int food_crush_on = 0;
	int r = 0;
	gotoxy(MAP_ADJ_X, MAP_ADJ_Y + MAP_Y, " YOUR SCORE: ");
	printf("%3d, LAST SCORE: %3d, BEST SCORE: %3d", z->score, z->last_score, z->best_score);

	while (1) {
		food_crush_on = 0;
		srand((unsigned)time(NULL) + r);
		z->food_x = (rand() % (MAP_X - 2)) + 1;
		z->food_y = (rand() % (MAP_Y - 2)) + 1;

		for (i = 0; i<z->length; i++) {
			if (z->food_x == z->x[i] && z->food_y == z->y[i]) {
				food_crush_on = 1;
				r++;
				break;
			}
		}
		for (int k = 0; k < z->num_of_bomb; k++)
		{
			if (z->food_x == z->bomb_x[k] && z->food_y == z->bomb_y[k]) {
				food_crush_on = 1;
				r++;
			}
		}
		if (food_crush_on == 1) continue;

		gotoxy(MAP_ADJ_X + z->food_x, MAP_ADJ_Y + z->food_y, "¢Ü");
		z->speed -= 3;
		break;

	}
}