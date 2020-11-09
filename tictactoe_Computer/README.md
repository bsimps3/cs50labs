# TicTacToe vs. a computer (a really dumb one) 

One way to make a really dumb tictactoe playing "robot" is to just make it randomly put an O after you play an X.  We'd like for that O not to overwrite a previous move, so we'll be adding a function which can check to see if there has already been a move played in a particular spot.

To make a random number in C, one way is to use a function named rand() which is available in the stdlib.h library.  

The way rand() works, is that it will return a random number between 1 and some large number which varies depending on the computer.  That large number is stored in a variable named RAND_MAX.  That variable is also available because of the stdlib.h library.  You can see what that number is on your computer by printing RAND_MAX (although we don't really need to know it).

The rand() function will never return RAND_MAX, but it returns all numbers up to and excluding it.  

If we want a random number from 1-9 we could do the following:

```c
int random_number = rand() / ((double)RAND_MAX + 1) * 10;
```

The purpose of (double) before RAND_MAX is to avoid an integer division which would result in zero.  This is called "casting".  We're forcing RAND_MAX to be a double type variable so that when the division happens, it results in a decimal between 0 and up to but not including 1.  Then, we multiply that decimal by 10 to get a number from 1-9.

## Example code:
To see an example of the working program, do the following:

Run this command first.
```c
chmod +x example
```
Then run the following command to see the code working. 
```c
./example
```

## Your Turn
Read through all the code and the comments, THEN Write the missing function (you'll see comments describing what you need to do.
## Submitting:
Use the following to submit your lab.  There are no automated checks to pass for this one (so you don't need to run check50).

submit50 bsimps3/cs50labs/2020/tictactoe_Computer

[For more information on functions download our CS50 Functions Reference Sheet](https://cs50.harvard.edu/ap/2020/assets/pdfs/functions.pdf)
