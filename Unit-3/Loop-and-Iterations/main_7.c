#include <stdio.h>

/*
Write a program to check whether the given three digit number is 
Armstrong number or not
*/

int main ()
{
    int number, remainder, sum, n;
    
    printf("Enter the number: ");
    scanf("%d", &number);
    
    n = number;
    
    while (n != 0)
    {
        remainder = n % 10;
        sum += remainder * remainder * remainder;
        n /= 10;
    }
    
    if (number == sum)
        printf("Given number is Armstrong number");
    else
        printf("Given number is not Armstrong number");
        
     return 0;
}  