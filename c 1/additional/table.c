#include <stdio.h>
int main () 
{
    int table;
    printf("Enter the Number to get the table :");
    scanf("%d" , &table);

    for (int i = 1; i < 11 ; i++)
    {
        printf("%d x %d = %d\n" , table , i , table*i );
    }
    
    return 0;
    
}