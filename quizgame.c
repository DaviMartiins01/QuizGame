#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void InitialScreen(void);
void Help(void);

char playerchoice;
int loop = 1;

int main(void)
{
      while(loop == 1)
      {
          InitialScreen();
      }

      return 0;
}

void InitialScreen(void)
{
      system("cls");
      printf("\n\n\t\t    WELCOME TO THE GAME!!\n\n");
      printf("\t\t_____________________________\n\n");
      printf("\t\t> Press S for start the game\n");
      printf("\t\t> Press V to view the highest score\n");
      printf("\t\t> Press R to reset score\n");
      printf("\t\t> Press H for help\n");
      printf("\t\t> Press Q to quit\n");
      printf("\t\t_____________________________\n\n");
      printf("\t>>>");
      playerchoice = getche();

      switch (playerchoice)
      {
            case 's':
              printf("Run game!");
              break;

            case 'v':
              printf("View score");
              break;

            case 'r':
              printf("Reset score");
              break;

            case 'h':
              Help();
              break;

            case 'q':
              printf("quit");
              loop = 0;
              break;

            default :
              printf("Invalid value");
      }
}

void Help(void)
{
    system("cls");
    printf("\n\n\t\t\tHELP!\n");
    printf("\t\t_____________________________\n\n");
    printf("\tIf you don't know how to play a quiz, please kill yourself\n\n");
    printf("Prees any key for back >>> ");
    playerchoice = getche();
    InitialScreen();
}
