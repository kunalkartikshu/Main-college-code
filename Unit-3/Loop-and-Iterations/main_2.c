#include <stdio.h>

/*
Write a program to print factorial of any number
*/

int main ()
{
    int number = 0;
    int factorial = 1;
    int i = 1;
    
    printf("Enter the num you want factorial of: ");
    scanf("%d", &number);
    
    while (i < number)
    {
        factorial = factorial * i;
        i = i + 1;
    }
    
    printf("factorial: %d", factorial);
    
    return 0;
}