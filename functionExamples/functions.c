#include <cs50.h>
#include <stdio.h>

//Line 5 below is a function declaration.  It lets C know to go look for a function named calculate if it encounters a call to that function in the main() function below.
//
int calculate(int input1, int input2);

int main(void)
{
     int number1 = get_int("what is the first number?");
     int number2 = get_int("what is the second number?");

     int answer = //you should type something here to "call" the function 

     printf("The answer is %i \n", answer);
}

int calculate(int input1, int input2)
{
    int result = input1 + input2;

    return result;
}

//Follow the instructions at the end to alter the calculate() function.  Show Mr. Simpson each time you make it do something.
