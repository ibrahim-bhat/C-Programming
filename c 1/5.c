//Write a C program to check whether a given character is a vowel or consonant using if-else statement.

    #include <stdio.h>
    int main(){
      char c ;
      printf("Enter any character: ");
      scanf("%c", &c);
        if ( c == 'a' || c == 'e' ||c == 'i' ||c == 'o' ||c == 'u'  ){
            printf("%c is a vowel", c);
        }  else if ( c == int){
            printf("Please enter valid input");
        } else {
            printf("%c is constant" , c);
        }
    }