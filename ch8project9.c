#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define N 10

#define MOVES 4
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define EMPTY '.'

int main(void)
{
	int i, j, count, gen_move;
	int x, y;
	bool can_move[4];
	char matrix[N][N];
	char letters[27] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ\0"};

	srand(time(NULL));

	for (y = 0; y < N; y++) {
		for (x = 0; x < N; x++) {
			matrix[y][x] = EMPTY;
		}
	}
	
	x = 0; y = 0;
	
	for (i = 0; i < 26; i++) {
		matrix[y][x] = letters[i];

		for (j = 0; j < MOVES; can_move[j] = false, j++);
		
		count = 0;
		if (y-1 >= 0 && matrix[y-1][x] == EMPTY) {
			can_move[UP] = true;
			count++;
		}
		if (y+1 < N && matrix[y+1][x] == EMPTY) {
			can_move[DOWN] = true;
			count++;
		}
		if (x-1 >= 0 && matrix[y][x-1] == EMPTY) {
			can_move[LEFT] = true;
			count++;
		}
		if (x+1 < N && matrix[y][x+1] == EMPTY) {
			can_move[RIGHT] = true;
			count++;
		}

		if (count == 0) {
			break;
		}

		while (true) {
			gen_move = rand() % MOVES;

			if (can_move[gen_move] == true) {
				switch(gen_move) {
					case UP: y--; break;
					case DOWN: y++; break;
					case LEFT: x--; break;
					case RIGHT: x++; break;
				}
				break;
			} 
		}
	}
		
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			printf("%c", matrix[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
