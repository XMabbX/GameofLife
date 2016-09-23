//Coder 1

#include <stdio.h>
#include <ncurses.h>
#include "var.h"


int main(){


  int array = init();



  initscr();
  //int array[100][100];

  mvaddch(10,10,'X');

  refresh();
  printf("%d",array[1][1]);
  refresh();
  getch();			/* Wait for user input */
  endwin();

    return 0;
}
