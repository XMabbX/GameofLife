//Coder 1

#include <stdio.h>
#include <ncurses.h>
#include "var.h"


int main(){

  int age,i,limit=2;

  printf("Insert the size of the universe.");
  scanf("%d", &SIZE);

  initscr();
  refresh();

  int **matrix = (int **)malloc(SIZE * sizeof(int*));
    for(i = 0; i < SIZE; i++) matrix[i] = (int *)malloc(SIZE * sizeof(int));

  for(age=1;age < limit;++age){
    //Bucle central del joc

    refreshmatrix(matrix);

    refresh();
    getch();
  }

  endwin();

  return 0;
}
