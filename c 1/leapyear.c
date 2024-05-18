//C program to check whether a given year is a leap year or not using if-else statement.

        #include <stdio.h>
            int main() {
                int year;
                printf("Enter the year: ");
                scanf("%d", &year);
                 
                if ( year % 4 == 0 ){
                        printf("%d is leap year" , year);
                } else if ( year % 100  || year % 400 ){
                        printf("%d is not a leap year" , year);
                }
            return 0;
            }