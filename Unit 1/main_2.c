#include <stdio.h>

/*
Write a program to swap two variables using third variable
*/

int main ()
{
    int a;
    int b;
    int c;
    
    printf("Enter a:  ");
    scanf("%d", &a);
    
    printf("Enter b: ");
    scanf("%d", &b);
    
    c = a;
    a = b;
    b = c;
    
    printf("New value of a: %d\n", a);
    printf("New value of b: %d\n", b);
    
    return 0;
}