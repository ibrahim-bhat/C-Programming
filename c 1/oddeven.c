   //C program to check whether a given number is even or odd using if-else statement.
    #include <stdio.h>
        int main (){

                int num  ;
                    printf("Enter an integer : ");
                    scanf("%d",&num);
                        if ( num %2 == 0 ) {
                            printf ("%d is Even \n", num);
                        } else {
                            printf("%d is Odd \n",num);
                        }

                return 0;
        }