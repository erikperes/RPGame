#include "Movement.h"
#include <conio.h>
#include <stdbool.h>
#include <Windows.h>

void Move(char** map, int x, int y, char move) {
	
	int prevx, prevy;
	prevx = x;
	prevy = y;
	
	switch (move) {
	case 'w':
		x--;
		break;
	case 's':
		x++;
		break;
	case 'a':
		y--;
		break;
	case 'd':
		y++;
		break;
	case 'x':
		printf("VEGE A JATEKNAK! \n");
		exit(1);

	}
	
	if (map[x][y] == '1') {
		map[x][y] = 'O';
		map[prevx][prevy] = '1';
    }
	else if (map[x][y] == '8' || map[x][y] == '3') {
	printf("GAME OVER\n");
	exit(1);
	}
	else if (map[x][y] == '5') {
		map[x][y] = 'O';
		map[prevx][prevy] = '1';

	}
	else if (map[x][y] == '9') {
		map[x][y] = '1';
		map[prevx][prevy] = '1';
		printf("NYERTEL! \n");
		exit(1);
	}

	/*if (move == 'w') {
		x--;
	}
	else if (move == 's') {
		x++;
	}
	else if (move == 'a') {
		y--;
	}
	else if (move == 'd') {
		y++;
	}
	else if (move == 'x'){
		exit(1);
		printf("VEGE A JATEKNAK");
	}
	else {
		printf("NEM JO GOMBOT NYOMTAL A MOZGASHOZ");
	}

	if (map[x][y] == '1') {
		map[x][y] = 'O';
		map[prevx][prevy] = '1';
	}
	else if (map[x][y] == '8' || map[x][y] == '3') {
		printf("GAME OVER\n");
		exit(1);
	}
    if (map[x][y] == '5') {
		map[x][y] = 'O';
		map[prevx][prevy] = '1';

	}*/

}



