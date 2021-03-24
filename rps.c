/*
*  Author: Vina Culas
*  File: rps.c
*  Date Created: 3/23/21
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define ROCK 0
#define PAPER 1
#define SCISSORS 2

char opp_name[30];
char input[10];
int comp;

int main()
{
   srand(time(NULL));

   printf("VINA'S ROCK, PAPER, SCISSORS GAME\n\n");

   printf("What Is Your Opponent's Name?: ");
   scanf("%s", opp_name);

   while (1)

   {
      printf("\nChoose Your Weapon ('Rock', 'Paper', 'Scissors' or 'q' To Quit): ");
      scanf("%s", input);

      comp = rand() % 3;

      if (!strcmp(input, "rock") || !strcmp(input, "Rock") ||
          !strcmp(input, "ROCK") || !strcmp(input, "r") || !strcmp(input, "R"))
      {
         //printf("\n User inputted rock");

         if (comp == ROCK)
         {
            //tie
            printf("%s Chose Rock...\n", opp_name);
            printf("You and %s tied!\n", opp_name);
         }
         else if (comp == PAPER)
         {
            //comp wins
            printf("%s Chose Paper...\n", opp_name);
            printf("%s Won!\n", opp_name);
         }
         else if (comp == SCISSORS)
         {
            //player wins
            printf("%s Chose Scissors...\n", opp_name);
            printf("You Won!\n");
         }
      }
      else if (!strcmp(input, "paper") || !strcmp(input, "Paper") ||
               !strcmp(input, "PAPER") || !strcmp(input, "p") || !strcmp(input, "P"))
      {
         //printf("\n User inputted paper");

         if (comp == ROCK)
         {
            //player wins
            printf("%s Chose Rock...\n", opp_name);
            printf("You Won!\n");
         }
         else if (comp == PAPER)
         {
            //tie
            printf("%s Chose Paper...\n", opp_name);
            printf("You and %s tied!\n", opp_name);
         }
         else if (comp == SCISSORS)
         {
            //comp wins
            printf("%s Chose Scissors...\n", opp_name);
            printf("%s Won!\n", opp_name);
         }
      }
      else if (!strcmp(input, "scissors") || !strcmp(input, "Scissors") ||
               !strcmp(input, "SCISSORS") || !strcmp(input, "s") || !strcmp(input, "S"))
      {
         //printf("\n User inputted scissors");

         if (comp == ROCK)
         {
            //comp wins
            printf("%s Chose Rock...\n", opp_name);
            printf("%s Won!\n", opp_name);
         }
         else if (comp == PAPER)
         {
            //player wins
            printf("%s Chose Paper...\n", opp_name);
            printf("You Won!\n");
         }
         else if (comp == SCISSORS)
         {
            //tie
            printf("%s Chose Scissors...\n", opp_name);
            printf("You and %s tied!\n", opp_name);
         }
      }
      else if (!strcmp(input, "q"))
      {
         exit(0);
      }
      else
      {
         printf("That Is Not A Valid Weapon!\n");
      }
   }
   return 0;
}