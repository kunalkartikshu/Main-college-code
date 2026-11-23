#include <stdio.h>

/*
Write a program to check eligibility for voting. Use nested if-else to
print the age group of user, and ask for verification if age is 
more than 100 and print gender of the voter as well.
*/

int main ()
{
    int Age;
    char Gender;
    
    printf("Enter your age: ");
    scanf("%d", &Age);
    
    printf("Enter your gender(M for Male, F for Female): ");
    scanf(" %c", &Gender);
    
    
    if(Age >= 18 && Age < 100)
    {
        printf("\nYou are eligible to vote ");
        if(Age <= 60)
        {
            printf("and you'e an young adult. ");
        }
        else
        {
            printf("and you'e an senior citizen. ");
        }
    }
    else if(Age >= 100)
    {
        printf("\nPlease verify your age since it is greater than 100. ");
    }
    else
    {
        printf("\nYou are not eligible to vote.");
    }
    
    printf("Your gender is %c", Gender);
    
    return 0; 
}
