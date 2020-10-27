# Functions

In this lab you will learn:

- What is a function
- Why programmers use functions
- How to write your own functions in C

[For more information on functions download our CS50 Functions Reference Sheet](https://cs50.harvard.edu/ap/2020/assets/pdfs/functions.pdf)

## What is a Function?

**Functions** in computer science are similar to those we've seen in math, whereby they take in some input and produce some output.

Since the first program we wrote together, we've been using functions! These were functions that were given to us, that we didn't have to create ourselves, such as `printf()`, `get_int()`, and even `main()`.

These functions were written by programmers many years ago, and are made available to us so we don't have to constantly reinvent the wheel! We are able to reuse these functions over and over again. 

Imagine what programming would be like if we had to recreate `printf()` every time we wanted to output something to our terminal window! It would take forever to complete the simplest program!

The other key reason that programmers use functions is **abstraction**. To use `get_int()` for instance, we need to know
* The name of the function
* What the function does
* What arguments to give to the function
* What kind of result the function returns

In order to use `get_int()`, we don't have to know how it's implemented. We only need to know how to use it.

{% next %}

## Writing our own Functions

We can write our own functions as well! Once we've taken the time to program and debug our function, we can use it over and over again in multiple programs. Using functions, our code becomes simpler, more organized, and easier to debug!

Every C program that we've written so far contains one function, the `main` function. We can define our own custom functions with similar syntax.

In order to use our own custom function, we need to give the compiler information about the function. We do this with a function **prototype**, above the `main` function. 

The prototype contains three parts: 

1. The **return type**, which is the data type of the function's output. The return type of the `get_int()` function, for instance, is an `int`. Sometimes a function does not return a value, (such as `printf()`), in which case the return type is `void`.
2. The name; this cannot include spaces and cannot be one of C's existing keywords.
3. The parameters, in parentheses, also known as **arguments**. These are the function's inputs (if there are none, use `void`). The data type of each argument must be included in front of the argument name.

The function definition, includes the logic that will be carried out, which is enclosed in curly braces. The function definition typically follows the main function. Note that the function prototype is followed by a semicolon, `;`, while the function definition is not.

{% next %}

Let's take a look at this example:

```c
#include <cs50.h>
#include <stdio.h>

int square(int n);

int main(void)
{
    int side = get_int("Enter the side length: ");
    printf("The area is %i.\n", square(side));
}

int square(int n)
{
    return n * n;
}
```

We've created a custom function named `square()`. We declare the function with the return type `int`, the name, `square`, and the argument with its type, `(int n)`. Our `main()` function calls the `square()` function when printing the square of the input. We call the function using its name ,`square`, with the value we are passing into that function ,`side`. The previous line of code declares and gets a value for `side`, so this variable is already initialized.

When the function runs, the value that is passed when it's called (stored in `side`) is copied into the variable defined as an input to the function (`n`). We now calculate the square and return its value, which is an `int` since the function was declared with an `int` return value.

Note that our function, `square()`, is defined after the `main()` function. Placing our function prototype before `main()`, allows the compiler recognize it before `main()` calls it.

Feel free to try typing this code into a new file, compiling it, and testing it.

{% next %}

## Your Turn
Change the code in functions.c so that you can accomplish the two goals but by calling the functions instead.`
## Submitting:
Use the following to submit your lab.  There are no automated checks to pass for this one (so you don't need to run check50).

submit50 bsimps3/cs50labs/2020/functionReview

[For more information on functions download our CS50 Functions Reference Sheet](https://cs50.harvard.edu/ap/2020/assets/pdfs/functions.pdf)
