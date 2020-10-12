# Functions

In this lab you will learn:
- How functions are used
- The different parts of a function

[For more information on functions download our CS50 Functions Reference Sheet](https://cs50.harvard.edu/ap/2020/assets/pdfs/functions.pdf)

## What is a Function?

**Functions** in computer science are similar to those we've seen in math, whereby they take in some input and produce some output.

Functions have a header line, a list of parameters (the inputs), a body, and sometimes a return value.

```c
return_type function_name( parameter list ) {
   body of the function
   }
```
The first line of code above is the function header.  The first thing in the function header is the return type.  If your function is going to return a value, this is where you say what kind of value.  Some common return types are:
*void
*int
*float
But any variable type that exists in C can be a return type.

The next part of the function header is the function name.  The name must be unique and not already taken by another function.  When you use (or call) this function you'll use the name you type here.  

The next part of the function header is the parameter list inside of the parentheses.  This is where you declare any inputs you'll need to use in your function.  Typically you would declare the variable type and give the variable a name inside of the parentheses like this:

```c
void myFunction( int input1 )
{
    printf("the input is %i", input1);
}
```

{% next %}

## Writing our own Functions

[For more information on functions download our CS50 Functions Reference Sheet](https://cs50.harvard.edu/ap/2020/assets/pdfs/functions.pdf)
