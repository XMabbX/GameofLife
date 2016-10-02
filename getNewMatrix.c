/////////////
// Coder 2 //
/////////////

#include <stdio.h>
#include <ncurses.h>

void getNewMatrix(int** matrix, int size){

	int new_matrix[size][size];
	int x,y,f,c,i,j; 	// for's indexes

	// Copy matrix in new_matrix
	for(x = 0; x < size; x++){
		for(y = 0; y < size; y++){
				new_matrix[x][y]=matrix[x][y];
		}
	}

  for ( f = 0; f < size; f++) {					//go over rows big matrix
    for ( c = 0; c < size; c++) {				//go over columns big matrix

      int live = 0;											//inicialize number of alive cell in the neighbour

      for ( i = 0; i < 3; i++) {						//go over rows matrix 3x3
        for ( j = 0; j < 3; j++) {					//go over columns matrix 3x3

          if (((f - 1) + i) >= 0 && ((c - 1) + j) >= 0 && ((f - 1) + i) < size
              && ((c - 1) + j) < size && matrix[(f - 1) + i][(c - 1) + j] == 0){ //Borders condition
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

	for(x = 0; x < size; x++) {
		for(y = 0; y < size; y++){
				matrix[x][y] = new_matrix[x][y];
		}
	}

}
