//C program to find the largest among three numbers using if-else statement.

        #include <stdio.h>
         int main () {
            int x ,y , z ;
            printf("Enter three numbers : ");
            scanf("%d %d %d",&x , &y , & z);

                    if ( x >= y && x >= z ){
                        printf("%d is greater" , x);
                    } else if ( y >= z && y >= x) {
                        printf("%d is greater" ,y);
                    } else if ( z >= x && z >= y) {
                        printf("%d is greater", z);
                    }
            return 0;
         }