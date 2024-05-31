// Recursions

/*
Recursive Functions :
Recursive functions or Recursion is a process when a function calls a copy of itself to work on smaller problems.

Recursion is the process in which a function calls itself directly or indirectly. And the corresponding function or function which calls itself is called as recursive function.

Any function which calls itself is called recursive function.
This makes life of programmer easy by dividing complex problem into simple or easier problems.
A termination condition is imposed on such functions to stop them executing copies of themselves forever or infinitely.
Any problem which can be solved recursively can also be solved iteratively.
Recursions are used to solve tower of Hanoi, Fibonacci series, factorial finding etc.



Base condition in recursion :
The case at which the function doesn’t recur is called the base case.
Recursive Case :
The instances where the function keeps calling itself to perform a subtask i.e. solving problem by dividing it in small parts, is called the recursive case.


Now let me summarize whole recursions. So Recursion is a process in which any function keeps calling itself till any termination condition is satisfied and in simple words you can think Recursions as same like iteration because in both of them repetition occurs till any condition is satisfied or becomes false.



And the most important thing during using recursions is it’s termination condition because most of time the condition given in recursive function is wrong and because of that the function is executed infinitely or for forever.
*/

//finding the factorial 5x4x3x2x1=120

#include <stdio.h>
int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1); // Recursion of Function  (recursive loop)
    }
}

int main()
{
    int num;
    printf("Enter a no. :");
    scanf("%d", &num);
    printf("\nThe factorial of %d is %d", num, factorial(num));

    return 0;
}
// The recursive loop is created by each function call calling itself with a reduced argument (number - 1). This continues until the base case (number == 1 || number == 0) is met. The base case stops further recursion, and the results of the recursive calls are then multiplied together as the stack unwinds, ultimately computing the factorial of the original number.






/*
what is the meaning of iteratively and recursively
    Recursion is a technique in which the function calls itself in its body to solve the problem, typically breaking into smaller and more manageable sub-problems. In contrast, iteration is a technique that repetitively executes a code block until the condition is unmet

    In simple terms, an iterative function is one that loops to repeat some part of the code, and a recursive function is one that calls itself again to repeat the code.

*/






/*
fib_recursive(int n):
     if n==1 or n==2:
         return n

     else:
      return fib_recursive(n-1) + fib_recursive(n-2)

      The Fibonacci Sequence is the series of numbers:

0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...

The next number is found by adding up the two numbers before it:

the 2 is found by adding the two numbers before it (1+1),
the 3 is found by adding the two numbers before it (1+2),
the 5 is (2+3),
and so on!
Example: the next number in the sequence above is 21+34 = 55
It is that simple!

Here is a longer list:

0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89,144,233,377,610,987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, ...
*/