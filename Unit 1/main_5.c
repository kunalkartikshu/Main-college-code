#include <stdio.h> 

/*
Write a program to reverse a three digit number
*/

int main()
{
    int number;
    int reverse = 0;
    int digit;
    
    printf("Enter a three digit number: ");
    scanf("%d", &number);
    
    digit = number % 10;
    reverse = reverse * 10 + digit;
    number = number / 10;
    
    digit = number % 10;
    reverse = reverse * 10 + digit;
    number = number / 10;
    
    digit = number % 10;
    reverse = reverse * 10 + digit;
    
    printf("%d", reverse);
    
    return 0;
}