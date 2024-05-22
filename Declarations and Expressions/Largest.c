/* . **Find the  Largest Element:**
Write a program to find the  largest element in an array.*/

#include <stdio.h>
int main() {
    int size;
    printf("Enter the size of an array :");
    scanf("%d" , &size);
    int  arr[size] ,i ;
    printf("Enter Numbers to find the  largest element :");
    for ( i=0; i < size; i ++ ){
        scanf("%d", & arr[i]);
    }
    for ( i=0; i<size; i++){
        if (arr[0] < arr[i]){
            arr[0] = arr[i];
        }
    }
    printf("The largest among entered elements is : %d" , arr[0]);
return 0;
}