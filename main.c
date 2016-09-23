//Coder 1

#include <stdio.h>
#include <ncurses.h>
#include "var.h"


int main(){

  printf("Insert the size of the universe.");
  scanf("%d", &SIZE);

  int age,i,limit=2;

  int **matrix = (int **)malloc(SIZE * sizeof(int*));
    for(i = 0; i < SIZE; i++) matrix[i] = (int *)malloc(SIZE * sizeof(int));

   initscr();

  //matrix[10][10]=2;
  for(age=1;age < limit;++age){

    refreshmatrix(matrix);

    refresh();
    getch();
  }

  endwin();

  return 0;
}
