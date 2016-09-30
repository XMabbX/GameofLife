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

  int age,i,limit=100;
  int x,y;
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


int half = floor(SIZE/2);
switch (option) {
  case 1:
    matrix[half-1][half]=0;
    matrix[half-1][half+1]=0;
    matrix[half][half-1]=0;
    matrix[half][half]=0;
    matrix[half+1][half]=0;
  break;
  case 2:

  break;
  case 3:

  break;
}

for(x=0;x<SIZE;++x)
{
  for(y=0;y<SIZE;++y)
  {
      matrix[x][y] =1;
  }

}

  for(age=1;age < limit;++age){
    //Bucle central del joc

    for(x=0;x<SIZE;++x)
    {
      for(y=0;y<SIZE;++y)
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

    getNewMatrix(matrix, SIZE);

  }

  endwin();

  return 0;
}
