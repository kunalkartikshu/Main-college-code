#include <stdio.h>

/*
Write a program to print the average of first n numbers
*/

int main ()
{
    int n;
    float sum = 0;
    int i = 0;
    
    printf("enter n: ");
    scanf("%d", &n);
    
    do{
        sum = sum + i;
        i = i + 1;
     } while (i <= n);
     
     float average = sum / n;
     
     printf("sum: %.2f\n", sum);
     printf("average: %.2f\n", average);
     
     return 0;
}