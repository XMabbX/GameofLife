/////////////
// Coder 3 //
/////////////

/*
   ************************ Game of Life **************************
  * # Options Availables                                           *
 *   1 - The R-pentino                                              *
*    2 - DieHard                                                     *
 *   3 - Acorn                                                      *
  *  0 - Exit                                                      *
   ****************************************************************
Type one of the options: */

#include "mainMenu.h"

int mainMenu() {

  // Declaration of local variables
  enum option_num {Exit, TheRpentino, DieHard, Acorn};
  int readOption;
  char voidVar;

  /**
  * Print the MENU
  */
  printf("\033[2J\033[1;1H");
  repite:
  printf("%s\n\r",GAME_OF_LIFE);
  printf("%s\n\r",OPTIONS_AVAILABLES);
  printf("%s\n\r",THE_R_PENTINO_MENU);
  printf("%s\n\r",DIE_HARD_MENU);
  printf("%s\n\r",ACORN_MENU);
  printf("%s\n\r",EXIT_MENU);
  printf("%s\n\r",END_OF_MENU);

  /**
  * Read The Option
  */
  printf("%s",TYPE);
  scanf("%d", &readOption);

  /**
  * Check if has been selected a correct option
  */
  switch (readOption) {
    case Exit:
        return 0;
    break;
    case TheRpentino:
        printf("\n\r%s",OPTION_SELECTED);
        printf("%s\n\r",THE_R_PENTINO);
    break;
    case DieHard:
        printf("\n\r%s",OPTION_SELECTED);
        printf("%s\n\r",DIE_HARD);
    break;
    case Acorn:
        printf("\n\r%s",OPTION_SELECTED);
        printf("%s\n\r",ACORN);
    break;
    default:
        printf("\033[2J\033[1;1H");
        printf("\n\r%s\n\r",ERROR_OPTION);
        clean_stdin();
        scanf("%c",&voidVar); // Wait until reads something
        goto  repite;
    break;
  }

  return readOption;
}
