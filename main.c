//Coder 1

#include <stdio.h>
#include <ncurses.h>
#include "var.h"
#include <string.h>

void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

int main(){

  int age,i,limit=2;
  int option; // This variable will use option to simulate
  printf("\033[2J\033[1;1H");

/**
* Main MENU
*/
option = mainMenu(); // Call Main MENU
if(!option) return 0;
printf("Insert the size of the universe. ");
scanf("%d", &SIZE); // Take data from command line
while(!SIZE);
int **matrix = (int **)malloc(SIZE * sizeof(int*));
  for(i = 0; i < SIZE; i++) matrix[i] = (int *)malloc(SIZE * sizeof(int));

initscr();
refresh();

  for(age=1;age < limit;++age){
    //Bucle central del joc

    //refreshmatrix(matrix);

    refresh();
    getch();
  }

  endwin();

  return 0;
}
