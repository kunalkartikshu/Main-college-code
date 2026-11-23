#include <stdio.h>

/*
Write a program to swap two variables without using a third variable
*/

int main ()
{
    int a;
    int b;
    
    printf("Enter a: ");
    scanf("%d", &a);
    
    printf("Enter b: ");
    scanf("%d", &b);
    
    printf("\nBefore swap: a = %d, b = %d\n", a, b);
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("Afrer swap: a = %d, b = %d", a, b);
    
    return 0;
}