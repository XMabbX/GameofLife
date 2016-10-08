/////////////
// Coder 1 //
/////////////

#include <stdio.h>
#include <ncurses.h>
#include "var.h"
#include <string.h>
#include <math.h>

int main(){

  int age,i,limit=10000;
  int x,y;
  int option; // This variable will use option to simulate
  printf("\033[2J\033[1;1H");

  /**
  * Main MENU
  */
  option = mainMenu(); // Call Main MENU
  if(!option) return 0; // If option = 0, then finish program

  printf("Insert the size of the universe: ");
  scanf("%d", &size); // Take data from command line
  while(!size); // Wait until size becomes different of 0

  int **matrix = (int **)malloc(size * sizeof(int*));
  for(i = 0; i < size; i++) matrix[i] = (int *)malloc(size * sizeof(int));

  for(x = 0; x < size; x++){
    for(y = 0; y < size; y++){
        matrix[x][y]=1;
    }
  }

  initscr();
  refresh();

  // Init the selected option
  switch (option) {
    case 1:
      initTheRPentino(matrix, size);
    break;
    case 2:
      initDiehard(matrix, size);
    break;
    case 3:
      initAcorn(matrix, size);
    break;
  }

    for(age=1;age < limit;++age){
      //Main bucle
      for(x=0;x<size;++x)
      {
        for(y=0;y<size;++y)
        {
            if(matrix[x][y]==0)
            {
              mvaddch(x,y,'X');
            }else{
              mvaddch(x,y,' ');
            }
        }
      }

      refresh();
      getch();

      getNewMatrix(matrix, size);

    }

    endwin();

  return 0;
}
