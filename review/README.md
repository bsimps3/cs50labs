# For Loop

In this lab you will learn:

- Why we have a for loop
- How to use a for loop

## What is a For Loop?

The **for loop** is probably the most frequently used loop of the three types of loops. It is very useful when we want to repeat something a known number of times.

Eventually we'll see how for loops can be useful for:
* Repeating a block of code 10 or 20 or *n* times when you know in advance the value of *n*
* Accessing each individual character in a string
* Looking at each element in an array (more on this to come later!)

Let's start by taking a look at the analogous loop in Scratch.

{% next %}

![scratch_repeat](https://raw.githubusercontent.com/cs50nestm/cs50labs/2019/forloop/repeat.png)

can be recreated in C by:

```c
for (int i = 0; i < 50; i++)
{
    printf("hello, world\n");
}
```

A for loop has three parts (included in parentheses after the word for, and separated by semicolons)

* **Initialization**: `int i = 0` is an initialization of the `int` variable `i`, which means that we created a variable and set its initial value to 0. `i` is a conventional name for a counting variable that keeps track of how many iterations of the loop we’ve already done.

* **Loop Condition**:  Then `i < 50` is the Boolean expression that the for loop checks, to determine if it will continue or not. When this condition is true, the for loop will run the code inside the curly braces. And since we started `i` at 0, stopping before `i` reaches 50 will mean this runs exactly 50 times, as we intended.

* **Increment Statement**:  The third part is the loop modification. This code is executed at the end of every loop. In this case, we increase the value of `i` by 1. As soon as `i` is no longer less than 50, the condition fails and the loop will end. The end result is that `hello world\n` is displayed exactly 50 times.

{% next %}

By taking advantage of loop modification, you can also get a loop to do something slightly different each time the loop repeats, or iterates.

For example, let's look at the following code:

```c
for (int j = 1; j <= 10; j++)
{
    printf("%i\n", j);
}
```

Here we start our counting variable, `j`, at 1 and execute the loop until `j` is no longer less than or equal to 10. Our first execution of the loop prints 1 on its own line. We then increment `j` by 1 and check the condition to see if it's still true. Since `j` is now 2, it's true that `2 <= 10` so the loop repeats printing 2 on it's own line. This continues until we've printed out the count from 1 to 10 inclusive.

{% next %}
# While Loop

In this lab you will learn:

- What is a while loop
- How and when to use while loops

## What is a While Loop?

As we'll soon see, there are three types of loops we can use in C. While each type of loop can be made to do just about anything, each type of loop serves a particular purpose.

The **while loop** repeatedly executes a block of code as long as the condition evaluates to true. We usually use a while loop when we don't know in advance how many times we want a block of code to repeat. An example might be to determine the number of times a number can be divided by 2:

```c
int n = get_int("Enter a number: ");
int counter = 0;

while (n > 1)
{
    n = n / 2;
    counter++;
}

printf("Your number can be divided by 2 %i times\n", counter);
```

{% next %}

The syntax for a while loop is similar to the if statement, with the key word `while` replacing the `if`, where the condition is in parentheses and the block of code to execute is wrapped inside of curly braces `{}`. But don't confuse the `while` loop with an `if` statement. Though the syntax is similar, the execution is different. The `while` loop repeatedly executes the block of code while the condition is true. The `if` statement executes the block of code once if the condition is true.

## Forever Loop

In Scratch, we saw a **forever loop** which was useful when we wanted to repeat an action forever:

![if_x_y](https://raw.githubusercontent.com/cs50nestm/cs50labs/2019/whileloop/forever.png)

We can use the while loop in C to create a forever loop:

```c
while (true)
{
    printf("hello, world\n");
}
```

Since the `while` keyword requires a condition, we use `true` as the Boolean expression to ensure that our loop will run forever. Our program will check whether the expression evaluates to true (which it always will in this case), and then run the lines inside the curly braces. Then it will repeat infinitely until we explicitly tell the program to break out of it.

{% next %}



## Your Turn
There are comments in the code on the right with instructions on what to do.  Complete the challenges in the comments by writing code below each comment.
{% spoiler "Hint" %}

{% endspoiler %}

### Submitting your work
Submit your work by executing 
```c
submit50 bsimps3/cs50labs/2020/review
```
[For more info, download the CS50 Loops Reference Sheet](https://cs50.harvard.edu/ap/2020/assets/pdfs/loops.pdf)
