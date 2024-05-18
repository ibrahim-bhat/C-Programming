//C program to find the roots of a quadratic equation using if-else statement. Prompt the user to enter the coefficients (a, b, and c) and display the roots accordingly.  x = (-b ± √ (b² – 4ac) )/2a,

    #include <stdio.h>
    #include <math.h>
        int main (){
            float a , b , c , disciminant , root1 , root2;
            
            printf("Enter the values of a,b,c");
            scanf("%d %d %d" , &a , &b , &c );
                
                disciminant = b*b - 4*a*c;

                        if (disciminant > 0){
                            root1 = (-b + sqrt(disciminant) /2*a);
                            root2 = (-b - sqrt(disciminant) /2*a);
                                printf("%f root 1:- , %f root 2:-", root1 ,root2);

                         } else if ( disciminant == 0){
                                root1 = root2 = -b/ 2*a;
                                printf("%f root1 , %f root2 ", root1);
                         } else if (disciminant < 0){
                                root1 
                         }

        }
