#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>  //for rand() and for system("clear")
#include <time.h> //this is so we can use the time() function which will make the random numbers more random

bool check_for_win(void);
void print_game(void);
void player_turn(char in);
void computer_turn(char in);
bool spot_is_taken(int choice);

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
int number_of_moves = 0; //this keeps track of how many moves have been made.  Once it reaches 9 with no winner, the game should be a tie.

int main(void)
{
   srand( time(0) );  //this line is to make the random numbers different every time we play the game.  You can ignore it.

   while ( keepGoing )
   {
      system("clear");  //this just makes playing the game a little...  clearer... it clears the terminal
      print_game();

      player_turn('X'); 

      if( check_for_win() )  //did anyone win?
      {
         winner = "player1";
         keepGoing = false; //the next loop will not execute because keepGoing is now false 
         break;  //break is a keyword which stops the current loop and moves to the next loop.
      }
      else if( number_of_moves >=9)  //is there a tie?
      {
         winner = "CAT, there is no winner \n";
         keepGoing = false;
         break;
      }
      else  //if the above 2 if-statements are not true, then it is the computer's turn
      {
         computer_turn('O');

         if( check_for_win() )   
         { 
            winner = "computer";
            keepGoing = false;
            break;
         }
         else if( number_of_moves >=9)
         {
            winner = "CAT, there is no winner \n";
            keepGoing = false;
            break;
         }
      }
   } 
   print_game();
   printf("The winner is %s\n", winner);
}

void print_game(void)
{
   printf("Tic Tac Toe!!!!! versus the not-as-dumb computer \n");
   printf("  %c   |   %c   |   %c  \n ", spot1, spot2, spot3);
   printf(" %c   |   %c   |   %c  \n ", spot4, spot5, spot6);
   printf(" %c   |   %c   |   %c  \n ", spot7, spot8, spot9);
} 
void player_turn(char symbol)  //this version of player_turn() could work with either an X or an O if you give that as an input
{
   number_of_moves++;  //any time this function runs, we should increase number_of_moves by 1
   int choice; 
   do
   {
      choice = get_int("Choose a place to play your %c (spots are numbered 1-9 starting at top left \n", symbol);

   } while( spot_is_taken(choice) );  //now we force the user to pick a spot that is not already taken 


   if( choice == 1 )
   {
      spot1 = symbol;
   }
   else if( choice == 2)
   {
      spot2 = symbol;
   } else if( choice == 3)
   {
      spot3 = symbol;
   }
   else if( choice == 4)
   {
      spot4 = symbol;
   }
   else if( choice == 5)
   {
      spot5 = symbol;
   }
   else if( choice == 6)
   {
      spot6 = symbol;
   }
   else if( choice == 7)
   {
      spot7 = symbol;
   }
   else if( choice == 8)
   {
      spot8 = symbol;
   }
   else if( choice == 9)
   {
      spot9 = symbol;
   }
}


bool check_for_win(void)
{
   if( spot1== spot2 && spot2 == spot3 && ( spot1 == 'X' || spot1 == 'O')  )
   {
      return true;
   }
   else if(  spot4== spot5 && spot5 == spot6 && ( spot4 == 'X' || spot4 == 'O')  )
   {
      return true;
   } 
   else if(  spot7== spot8 && spot8 == spot9 && ( spot7 == 'X' || spot7 == 'O')   )
   {
      return true;
   }
   else if(  spot1== spot4 && spot4 == spot7 && ( spot1 == 'X' || spot1 == 'O')  )
   {
      return true;
   }
   else if(  spot2== spot5 && spot5 == spot8 && ( spot2 == 'X' || spot2 == 'O')  )
   {
      return true;
   }
   else if(  spot3== spot6 && spot6 == spot9 && ( spot3 == 'X' || spot3 == 'O')   )
   {
      return true;
   }
   else if(  spot1== spot5 && spot5 == spot9 && ( spot1 == 'X' || spot1 == 'O')  )
   {
      return true;
   }
   else if(  spot3== spot5 && spot5 == spot7 && ( spot3 == 'X' || spot3 == 'O')  )
   {
      return true;
   }
   else 
   {
      return false;
   }

}

bool spot_is_taken( int input )
{
  if( input == 1 && spot1 == '_' )
  {
     return false;
  }
  else if( input == 2 && spot2 == '_' )
  {
     return false;
  }
  else if( input == 3 && spot3 == '_' )
  {
     return false;
  }
  else if( input == 4 && spot4 == '_' )
  {
     return false;
  }
  else if( input == 5 && spot5 == '_' )
  {
     return false;
  }
  else if( input == 6 && spot6 == '_' )
  {
     return false;
  }
  else if( input == 7 && spot7 == '_' )
  {
     return false;
  }
  else if( input == 8 && spot8 == '_' )
  {
     return false;
  }
  else if( input == 9 && spot9 == '_' )
  {
     return false;
  }
  else
  {
     return true;
  }
}

void computer_turn(char symbol)
{
   number_of_moves++; //any time this function runs, we should increase number_of_moves by 1

   int choice; 
   do
   {
      choice = (rand() / ((double) RAND_MAX + 1)) * 10;  //rand() generates a random number between 1 and up to but not including RAND_MAX.
      //this line converts that into a random integer from 1-9.  You don't have to really "get" this line... let's just use it.

   } while( spot_is_taken(choice) );  //the computer could generate a random number for a spot which is already taken

   if( choice == 1 )
   {
      spot1 = symbol;
   }
   else if( choice == 2)
   {
      spot2 = symbol;
   }
   else if( choice == 3)
   {
      spot3 = symbol;
   }
   else if( choice == 4)
   {
      spot4 = symbol;
   }
   else if( choice == 5)
   {
      spot5 = symbol;
   }
   else if( choice == 6)
   {
      spot6 = symbol;
   }
   else if( choice == 7)
   {
      spot7 = symbol;
   }
   else if( choice == 8)
   {
      spot8 = symbol;
   }
   else if( choice == 9)
   {
      spot9 = symbol;
   }
   printf("the computer has chosen to play in spot:  %i \n", choice); 
}


