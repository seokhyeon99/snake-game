#include "header.h"

snake z;
int main() {
	title(&z);

	while (1) {
		if (kbhit()) do { z.key = getch(); } while (z.key == 224);
		Sleep(z.speed);

		switch (z.key) {
		case LEFT:
		case RIGHT:
		case UP:
		case DOWN:
			if ((z.dir == LEFT && z.key != RIGHT) || (z.dir == RIGHT && z.key != LEFT) || (z.dir == UP && z.key != DOWN) ||
				(z.dir == DOWN && z.key != UP))
				z.dir = z.key;
			z.key = 0;
			break;
		case PAUSE:
			pause(&z);
			break;
		case 115:
			if (z.status_on == 0) z.status_on = 1;
			else z.status_on = 0;
			z.key = 0;
			break;
		case ESC:
			exit(0);
		}
		move(&z);

		if (z.status_on == 1) status(&z);
	}
}
