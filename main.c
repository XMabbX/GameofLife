//Coder 1

#include <stdio.h>
#include <ncurses.h>
#include "var.h"


int main(){

  SIZE =100;

  int age,limit=2;
  int matrix[SIZE][SIZE];

   initscr();

  matrix[10][10]=10;
  for(age=1;age < limit;++age){

    void refreshmatrix(matrix);
    refresh();
    getch();
  }

  endwin();

  return 0;
}
