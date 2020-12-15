#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define number_of_questions 15

void InitialScreen(void);
void StartGame(void);
void ViewScore(void);
void Help(void);

int score;
int playercount = 0;

char playerchoice;
char nickname[20];

char Players[10][20] = {
                  "Player0",
                  "Player0",
                  "Player0",
                  "Player0",
                  "Player0",
                  "Player0",
                  "Player0",
                  "Player0",
                  "Player0",
                  "Player0"
                };

int ScorePlayers[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

char Questions[number_of_questions][100] = {
                                "1) What's the biggest animal in the world?",
                                "2) Who painted the Mona Lisa?",
                                "3) In Harry Potter, what is the name of The Weasley's house?",
                                "4) Typically, what's the strongest muscle in the human body?",
                                "5) What month was Prince George born?",
                                "6) Who plays Emily in the hit Netflix show, Emily In Paris?",
                                "7) Which rapper's real name is Dylan Kwabena Mills?",
                                "8) What year did Margaret Thatcher die?",
                                "9) Which planet is closest to the sun?",
                                "10) What is Queen Elizabeth II's surname?",
                                "11) What is the largest country in the world?",
                                "12) What is the name of the school in Sex Education?",
                                "13) How many valves does the heart have?",
                                "14) What nut is in the middle of a Ferrero Rocher?",
                                "15) What's a baby rabbit called?"
                            };

char Awnswers[number_of_questions*4][100] = {
                                          "A) The blue whale",
                                          "B) African Bush Elephant",
                                          "C) Sperm Whale   ",
                                          "D) Polar Bear",

                                          "A) Michelangelo     ",
                                          "B) Henri Matisse",
                                          "C) Leonardo da Vinci",
                                          "D) Edvard Munch",

                                          "A) the Shell",
                                          "B) The Burrow",
                                          "C) The Cave ",
                                          "D) Gryffindor",

                                          "A) Masseter",
                                          "B) Plantaris",
                                          "C) Deltoids",
                                          "D) Teres major",

                                          "A) June ",
                                          "B) March",
                                          "C) April",
                                          "D) July",

                                          "A) Anna Faris",
                                          "B) Lily Collins",
                                          "C) Ellen Page",
                                          "D) Chloe Grace Moretz",

                                          "A) Dr. Dre      ",
                                          "B) Tupac",
                                          "C) Dizzee Rascal",
                                          "D) Jay-Z",

                                          "A) 2013",
                                          "B) 2011",
                                          "C) 2012",
                                          "D) 2014",

                                          "A) Venus  ",
                                          "B) Mars",
                                          "C) Mercury",
                                          "D) Earth",

                                          "A) Wales   ",
                                          "B) Windor",
                                          "C) Coventry",
                                          "D) Agnes",

                                          "A) Russia",
                                          "B) China",
                                          "C) Brazil",
                                          "D) India",

                                          "A) Miles Ahead   ",
                                          "B) Bellwether High School",
                                          "C) Maiden College",
                                          "D) Moordale High",

                                          "A) Three",
                                          "B) Five",
                                          "C) Six  ",
                                          "D) Four",

                                          "A) Chestnuts",
                                          "B) Hazelnut",
                                          "C) Cashew   ",
                                          "D) Almonds",

                                          "A) kit",
                                          "B) Cria",
                                          "C) Pup",
                                          "D) Calf",
                                      };

char CorrectAnswers[number_of_questions] = {'a', 'c', 'b', 'a', 'd', 'b', 'c', 'a', 'c', 'b', 'a', 'd', 'd', 'b', 'a'};

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
              ViewScore();
              break;

            case 'r':
              printf("Reset score");
              break;

            case 'h':
              Help();
              break;

            case 'q':
              system("cls");
              printf("Thanks for playing.\n");
              loop = 0;
              break;

            default :
              printf("Invalid value");
      }
}

void StartGame(void)
{
      system("cls");
      printf("Type your nickname: ");
      scanf("%s", nickname);

      system("cls");
      int b = 0;
      for(int i = 0; i < number_of_questions; i++, b = b + 4)
      {
            printf("\n\t\t\t\t\t  QUIZ GAME\n");
            printf("\t\t_______________________________________________________________\n\n");
            printf("\t\t%s\n\n", Questions[i]);
            printf("\t\t%s", Awnswers[b]);
            printf("\t\t\t\t%s\n\n", Awnswers[b+1]);
            printf("\t\t%s", Awnswers[b+2]);
            printf("\t\t\t\t%s\n", Awnswers[b+3]);
            printf("\n\n\t>>> ");

            playerchoice = getche();

            if(playerchoice == CorrectAnswers[i])
            {
                score++;
            }
            if(playerchoice != CorrectAnswers[i] || i == number_of_questions-1)
            {
                ScorePlayers[0] = score;
                Players[0][20] = nickname;
                InitialScreen();
                break;
            }
            system("cls");
      }
}

void ViewScore(void)
{
      system("cls");
      printf("\n\t\t\t\t\t  View Score\n");
      printf("\t\t_______________________________________________________________\n\n");
      printf("\t\t\t\t Nicknames\t\tScores\n");
      for(int i = 1; i < 10; i++)
      {
            if(strcmp(Players[i], "Player0") == 0)
            {
                printf("\n\t\t\t\t-------\t\t|\t0");
            }
            else
            {
                printf("\n\t\t\t\t%s\t\t|\t%d", nickname, ScorePlayers[i-1]);
            }
      }

      printf("\n\nPrees any key for back >>> ");
      playerchoice = getche();
      InitialScreen();
}

void Help(void)
{
      system("cls");
      printf("\n\n\t\t\t    HELP!\n");
      printf("\t\t_____________________________\n\n");
      printf("\tIf you don't know how to play a quiz, please kill yourself\n\n");
      printf("Prees any key for back >>> ");
      playerchoice = getche();
      InitialScreen();
}
