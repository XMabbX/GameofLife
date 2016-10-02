int size;


/**
* Function used in main
*/

void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

void refreshmatrix(int);//Funcio que rep tota la matriu i la actualiza amb la seguent epoca Coder 2

void checkcell(int);//Rep una matriu de 3x3 i comprova si la cella central esta viva Coder 3

void initTheRPentino(int **matrix, int size) {
  int half = size / 2;
  matrix[half-1][half]=0;
  matrix[half-1][half+1]=0;
  matrix[half][half-1]=0;
  matrix[half][half]=0;
  matrix[half+1][half]=0;
}

void initDiehard(int **matrix, int size) {
  int half = size / 2;
  matrix[half][half-4]=0;
  matrix[half][half-3]=0;
  matrix[half+1][half-3]=0;
  matrix[half-1][half+2]=0;
  matrix[half+1][half+1]=0;
  matrix[half+1][half+2]=0;
  matrix[half+1][half+3]=0;
}

void initAcorn(int **matrix, int size) {
  int half = size / 2;
  matrix[half+1][half-4]=0;
  matrix[half-1][half-3]=0;
  matrix[half+1][half-3]=0;
  matrix[half][half]=0;
  matrix[half+1][half+1]=0;
  matrix[half+1][half+2]=0;
  matrix[half+1][half+3]=0;
}
