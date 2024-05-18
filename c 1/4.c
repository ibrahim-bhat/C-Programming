/*Write a C program to calculate the grade of a student based on his marks using if-else statement. Assume the grading system is as follows:
A: 90-100
B: 80-89
C: 70-79
D: 60-69
F: Below 60 */

    #include <stdio.h>
        int main () {
            int marks;
                printf("Enter the Marks of student to check the marks : \n");
                scanf("%d" , & marks);

                    if ( marks <= 100 && marks >= 90){
                        printf(" Grade A");
                    } else if ( marks <= 89 && marks >= 80 ){
                        printf(" Grade B");
                    }else if ( marks <= 79 && marks >= 70){
                        printf(" Grade C");
                    }else if ( marks <= 69 && marks >= 60){
                        printf(" Grade D");
                    }else if ( marks < 60){
                        printf(" Fail");
                    } else if ( marks > 100){
                        printf("Enter marks between 0~100");
                    }
            return 0;
        }