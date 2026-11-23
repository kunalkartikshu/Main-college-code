#include <stdio.h>

/*
Write a program to enter marks of student and give the corresponding grade.
Grade - A if marks are greater than or equal to 90, 
Grade - B if they're greater than or equal to 75, 
Grade C if they're greater than or equal to 50 and 
the student fails if marks are less than 50. 
*/

int main (){
    int marks;
    printf("Enter your marks out of 100%: \n");
    scanf("%d", &marks);
    
    if(marks >= 90){
        printf("Grade: A\n");
    }
    else if(marks >= 75){
        printf("Grade: B\n");
    }
    else if(marks >= 50){
        printf("Grade: C\n");
    }
    else{
        printf("Grade: FAIL\n");
    }
    
    return 0;
}