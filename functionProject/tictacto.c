#include <stdio.h>
#include <cs50.h>

char spot1 = '_';
char spot2 = '_';
char spot3 = '_';
char spot4 = '_';
char spot5 = '_';
char spot6 = '_';
char spot7 = '_';
char spot8 = '_';
char spot9 = '_';
bool keepGoing = true;
string winner = "";

int main(void)
{
   while ( keepGoing )
   {
      print_game();

      player_1_turn();

      
      if( check_for_win() )
      {
         winner = "player1";
         keepGoing = false; 
         break;
      }
      else
      {
         print_game();
         player_2_turn();

         if( check_for_win() )   
         { 
            winner = "player2";
            keepGoing = false;
            break;
         }
         
      }


   } 
   printf("The winner is %s\n", winner);
}

