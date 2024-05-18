/*
C Program to Find the Size of int, float, double and char
*/

#include<stdio.h>
int main() {
    int inttype;
    float floattype;
    char chartype;
    double doubletype;

        printf("Size if int %d", sizeof(inttype));
        printf("\nSize if float %ld", sizeof(floattype));
        printf("\nSize if chartype %ld", sizeof(chartype));
        printf("\nSize if doubletype %ld", sizeof(double));

    return 0;
}