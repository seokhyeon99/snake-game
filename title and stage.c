#include "header.h"

void gotoxy(int x, int y, char* s) {
	COORD pos = { 2 * x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("%s", s);
}

void title(struct snake *z) {
	int i, j;

	while (kbhit()) getch();

	draw_map();
	for (i = MAP_ADJ_Y + 1; i<MAP_ADJ_Y + MAP_Y - 1; i++) {
		for (j = MAP_ADJ_X + 1; j<MAP_ADJ_X + MAP_X - 1; j++) gotoxy(j, i, "  ");
	}

	gotoxy(MAP_ADJ_X + (MAP_X / 2) - 7, MAP_ADJ_Y + 5, "+--------------------------+");
	gotoxy(MAP_ADJ_X + (MAP_X / 2) - 7, MAP_ADJ_Y + 6, "|        S N A K E         |");
	gotoxy(MAP_ADJ_X + (MAP_X / 2) - 7, MAP_ADJ_Y + 7, "+--------------------------+");

	gotoxy(MAP_ADJ_X + (MAP_X / 2) - 7, MAP_ADJ_Y + 9, " < PRESS ANY KEY TO START > ");

	gotoxy(MAP_ADJ_X + (MAP_X / 2) - 7, MAP_ADJ_Y + 11, "   ¡Þ ¡ç,¡æ,¡è,¡é : Move    ");
	gotoxy(MAP_ADJ_X + (MAP_X / 2) - 7, MAP_ADJ_Y + 12, "   ¡Þ P : Pause             ");
	gotoxy(MAP_ADJ_X + (MAP_X / 2) - 7, MAP_ADJ_Y + 13, "   ¡Þ ESC : Quit              ");

	gotoxy(MAP_ADJ_X + (MAP_X / 2) - 7, MAP_ADJ_Y + 17, "  iThings Lab");

	while (1) {
		if (kbhit()) {
			z->key = getch();
			if (z->key == ESC) exit(0);
			else break;
		}
		gotoxy(MAP_ADJ_X + (MAP_X / 2) - 7, MAP_ADJ_Y + 9, " < PRESS ANY KEY TO START > ");
		Sleep(400);
		gotoxy(MAP_ADJ_X + (MAP_X / 2) - 7, MAP_ADJ_Y + 9, "                            ");
		Sleep(400);

	}
	reset(z);
}

void stage2(struct snake *z) {
	int i, j;
	z->stage = 2;
	while (kbhit()) getch();

	draw_map();
	for (i = MAP_ADJ_Y + 1; i<MAP_ADJ_Y + MAP_Y - 1; i++) {
		for (j = MAP_ADJ_X + 1; j<MAP_ADJ_X + MAP_X - 1; j++) gotoxy(j, i, "  ");
	}

	gotoxy(MAP_ADJ_X + (MAP_X / 2) - 7, MAP_ADJ_Y + 5, "+--------------------------+");
	gotoxy(MAP_ADJ_X + (MAP_X / 2) - 7, MAP_ADJ_Y + 6, "|        LEVEL : 2         |");
	gotoxy(MAP_ADJ_X + (MAP_X / 2) - 7, MAP_ADJ_Y + 7, "+--------------------------+");

	gotoxy(MAP_ADJ_X + (MAP_X / 2) - 7, MAP_ADJ_Y + 9, " < PRESS ANY KEY TO START > ");

	gotoxy(MAP_ADJ_X + (MAP_X / 2) - 7, MAP_ADJ_Y + 11, "   ¡Þ ¡ç,¡æ,¡è,¡é : Move    ");
	gotoxy(MAP_ADJ_X + (MAP_X / 2) - 7, MAP_ADJ_Y + 12, "   ¡Þ P : Pause             ");
	gotoxy(MAP_ADJ_X + (MAP_X / 2) - 7, MAP_ADJ_Y + 13, "   ¡Þ ESC : Quit              ");

	gotoxy(MAP_ADJ_X + (MAP_X / 2) - 7, MAP_ADJ_Y + 17, "  iThings Lab");

	while (1) {
		if (kbhit()) {
			z->key = getch();
			if (z->key == ESC) exit(0);
			else break;
		}
		gotoxy(MAP_ADJ_X + (MAP_X / 2) - 7, MAP_ADJ_Y + 9, " < PRESS ANY KEY TO START > ");
		Sleep(400);
		gotoxy(MAP_ADJ_X + (MAP_X / 2) - 7, MAP_ADJ_Y + 9, "                            ");
		Sleep(400);

	}
	reset(z);
}

void stage3(struct snake *z) {
	int i, j;
	z->stage = 3;
	while (kbhit()) getch();

	draw_map();
	for (i = MAP_ADJ_Y + 1; i<MAP_ADJ_Y + MAP_Y - 1; i++) {
		for (j = MAP_ADJ_X + 1; j<MAP_ADJ_X + MAP_X - 1; j++) gotoxy(j, i, "  ");
	}

	gotoxy(MAP_ADJ_X + (MAP_X / 2) - 7, MAP_ADJ_Y + 5, "+--------------------------+");
	gotoxy(MAP_ADJ_X + (MAP_X / 2) - 7, MAP_ADJ_Y + 6, "|        LEVEL : 3         |");
	gotoxy(MAP_ADJ_X + (MAP_X / 2) - 7, MAP_ADJ_Y + 7, "+--------------------------+");

	gotoxy(MAP_ADJ_X + (MAP_X / 2) - 7, MAP_ADJ_Y + 9, " < PRESS ANY KEY TO START > ");

	gotoxy(MAP_ADJ_X + (MAP_X / 2) - 7, MAP_ADJ_Y + 11, "   ¡Þ ¡ç,¡æ,¡è,¡é : Move    ");
	gotoxy(MAP_ADJ_X + (MAP_X / 2) - 7, MAP_ADJ_Y + 12, "   ¡Þ P : Pause             ");
	gotoxy(MAP_ADJ_X + (MAP_X / 2) - 7, MAP_ADJ_Y + 13, "   ¡Þ ESC : Quit              ");

	gotoxy(MAP_ADJ_X + (MAP_X / 2) - 7, MAP_ADJ_Y + 17, "  iThings Lab");

	while (1) {
		if (kbhit()) {
			z->key = getch();
			if (z->key == ESC) exit(0);
			else break;
		}
		gotoxy(MAP_ADJ_X + (MAP_X / 2) - 7, MAP_ADJ_Y + 9, " < PRESS ANY KEY TO START > ");
		Sleep(400);
		gotoxy(MAP_ADJ_X + (MAP_X / 2) - 7, MAP_ADJ_Y + 9, "                            ");
		Sleep(400);

	}
	reset(z);
}