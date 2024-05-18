// a Program to find the factorial of a given number.'

#include <stdio.h>
int main () 
{
    int num , f = 1 ;
    printf("Enter a number to find the factorial :");
    scanf("%d" , &num);
    for ( int i = 1 ; i <= num ; i++){
        f = f * i;
    }
        printf("The factorial of %d is %d", num , f);
        return 0;  
}
