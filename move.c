#include "header.h"

void move(struct snake *z) {
	int i;


	if (z->x[0] == z->food_x && z->y[0] == z->food_y) {
		z->score += 10;
		if (z->score == 30)
		{
			z->dir = LEFT;
			stage2(z);
		}
		if (z->score == 70)
		{
			z->dir = LEFT;
			stage3(z);
		}
		food(z);
		z->length++;
		z->x[z->length - 1] = z->x[z->length - 2];
		z->y[z->length - 1] = z->y[z->length - 2];
	}
	for (int k = 0; k <z->num_of_bomb; k++) {

		if (z->x[0] == z->bomb_x[k] && z->y[0] == z->bomb_y[k]) {
			z->score -= 10;
			bomb(z);
			gotoxy(MAP_ADJ_X + z->x[z->length - 1], MAP_ADJ_Y + z->y[z->length - 1], "  ");
			z->length--;
		}
	}
	if (z->length == 3) {
		game_over(z);
		return;
	}
	if (z->x[0] == 0 || z->x[0] == MAP_X - 1 || z->y[0] == 0 || z->y[0] == MAP_Y - 1) {
		game_over(z);
		return;
	}
	for (i = 1; i<z->length; i++) {
		if (z->x[0] == z->x[i] && z->y[0] == z->y[i]) {
			game_over(z);
			return;
		}
	}

	gotoxy(MAP_ADJ_X + z->x[z->length - 1], MAP_ADJ_Y + z->y[z->length - 1], "  ");
	for (i = z->length - 1; i>0; i--) {
		z->x[i] = z->x[i - 1];
		z->y[i] = z->y[i - 1];
	}
	gotoxy(MAP_ADJ_X + z->x[0], MAP_ADJ_Y + z->y[0], "¤·");
	if (z->dir == LEFT) --z->x[0];
	if (z->dir == RIGHT) ++z->x[0];
	if (z->dir == UP) --z->y[0];
	if (z->dir == DOWN) ++z->y[0];
	gotoxy(MAP_ADJ_X + z->x[i], MAP_ADJ_Y + z->y[i], "¤¾");
}