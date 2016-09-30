#include <stdio.h>

int getNewMatrix(){

	int new_matrix[SIZE][SIZE];

  for (int f = 0; f < SIZE; f++) {					//go over rows big matrix
    for (int c = 0; c < SIZE; c++) {				//go over columns big matrix

      live = 0;																//inicialize number of alive cell in the neighbour

      for (int i = 0; i < 3; i++) {						//go over rows matrix 3x3
        for (int j = 0; j < 3; j++) {					//go over columns matrix 3x3

          if (((f - 1) + i) >= 0 && ((c - 1) + j) >= 0 && ((f - 1) + i) < SIZE
              && ((c - 1) + j) < SIZE && matrix[(f - 1) + i][(c - 1) + j] == 0){ //Borders condition
              if (i == 1 && j == 1){}
              else live++;
          }
        }
      }
      //RULES: (0 = alive; 1 = dead)
      if (matrix[f][c] == 0){															//#1:live central cell
        if (live < 2 || live > 3){new_matrix[f][c] = 1;}	//#2:first and third rule
        else {new_matrix[f][c] = 0;}											//#3:second rule
      } else if(matrix[f][c] == 1 && live == 3) {					//#4:dead central cell & fourth rule
        new_matrix[f][c] = 0;
      }
    }
  }
	return new_matrix;
}
