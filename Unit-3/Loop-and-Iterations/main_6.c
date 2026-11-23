#include <stdio.h>

/*
Write a program to print first n terms of Fibonacci series
*/

int main ()
{
    int n;
    int i = 1;
    int a = 0;
    int b = 1;
    int c;
  
    printf("Enter the number of terms you want to print: ");
    scanf("%d", &n);
    
    while (i <= n)
    {
        printf("%d, ", a);
        c = a + b;
        a = b;
        b = c;
        i++;
    }
    
    printf("The series is printed upto %d terms", n);
    
    return 0; 
}