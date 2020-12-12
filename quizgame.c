#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void InitialScreen(void);
void StartGame(void);
void Help(void);

char Questions[15][100] = {
                                "What's the biggest animal in the world?",
                                "Who painted the Mona Lisa?",
                                "In Harry Potter, what is the name of The Weasley's house?",
                                "Typically, what's the strongest muscle in the human body?",
                                "What month was Prince George born?",
                                "Who plays Emily in the hit Netflix show, Emily In Paris?",
                                "Which rapper's real name is Dylan Kwabena Mills?",
                                "What year did Margaret Thatcher die?",
                                "Which planet is closest to the sun?",
                                "What is Queen Elizabeth II's surname?",
                                "What is the largest country in the world?",
                                "What is the name of the school in Sex Education?",
                                "How many valves does the heart have?",
                                "What nut is in the middle of a Ferrero Rocher?",
                                "What's a baby rabbit called?"
                          };

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
              StartGame();
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

void StartGame(void)
{
      system("cls");
      for(int i = 0; i < 15; i++)
      {
            printf("%i) %s\n\n", i+1, Questions[i]);
            printf("A) s");
            printf("\t\tB) s\n");
            printf("C) s");
            printf("\t\tD) s");
            printf("\n\n\n>>> ");
            playerchoice = getche();
            system("cls");
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
