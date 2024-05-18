/*Reverse an Array:
A program to reverse the elements of an array in place.
Input: original_array[] = {1, 2, 3} Output: array_reversed[] = {3, 2, 1}*/

/*
#include <stdio.h>
int main () {
    int a[5] , i ;
    printf("Enter the elements of the array\n");
    for (i = 0; i<= 4; i++){
        scanf("%d" , &a[i]);
    }
    printf("\nReverse Element\n");
    for (i = 4; i>=0; i--){
        printf("%d\n" , a[i]);
    }
    return 0;
}
*/

//Another way
#include <stdio.h>
void reverseArray(int arr[] , int size ){
    for (int i = 0; i<= size; i++){
        printf("%d\n", arr[i]);
    }
    printf("Reverse Array");
    for(int i = size ; i>=0; i--){
        printf("%d\n", arr[i]);
    }
}
int main () {
    int originalArr[] = { 1, 2 , 4, 4, 5};
    int size = sizeof(originalArr) / sizeof(originalArr[0]);
    reverseArray(originalArr , size);
    return 0;
}
