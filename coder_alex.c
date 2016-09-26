#include <stdio.h>

int getNeighbour(int iteration){

	int position_x, position_y; // row and colum
	int neighbour[3][3];

	position_x = iteration/(SIZE);
	position_y = (iteration - position_x * SIZE) - 1;

	for (int i = 0; i < 3; i++) {			//go over rows
		for (int j = 0; j < 3; j++) {		//go over columns
			if (((position_x - 1) + i) < 0 || ((position_y - 1) + j) < 0 ||
				 	((position_x - 1) + i) >= SIZE || ((position_y - 1) + j) >= SIZE){ //Borders condition
				neighbour[i][j] = - 1;
			} else {
				neighbour[i][j] = matrix[(position_x - 1) + i][(position_y - 1) + j];
			}
		}
	}

	return neighbour;

}

bool state (int neighbour){

	int live = 0;
	bool state;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (neighbour[i][j] == 1) live++;
		}
	}
	//RULES:
	if (neighbour[1][1] == 1){									//live central cell
		if (live < 2 || live > 3){state = true;}	//first and third rule
		else {state = false;}											//second rule
	} elseif(live == 3) {												//dead central cell & fourth rule
		state = true;
	}
	return state; // true = live, false = dead
}
