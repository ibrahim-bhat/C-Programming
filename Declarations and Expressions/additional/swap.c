/* Program to Swap the values of two variables.
In this problem, you have to write a program that swaps the values of two variables that are entered by the user.*/

#include <stdio.h>
int main() {
    int a, b ,c ;
    printf("Enter the value of a & b : ");
    scanf("%d %d" , &a , &b );
        int temp = a;
        a = b;
        b = temp ;
        printf("After swapping %d \t %d", a ,b);
        return 0;
}