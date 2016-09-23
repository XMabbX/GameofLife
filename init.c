#include <stdio.h>


int init(void){

  int SIZE = 100;

  int *array = malloc(SIZE * sizeof(int));
    if(array==NULL)
    {printf("Error");
    getch();}

    array[1][1]=10;

  return array;

}
