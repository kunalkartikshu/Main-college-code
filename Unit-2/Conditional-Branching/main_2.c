#include <stdio.h>

/*
Write a program to check whether the given number is divisble by 2 and 3
*/

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);
    
    if (n % 2 == 0)
    {
        if (n % 3 == 0)
        {
            printf("Divisible by both 2 and 3\n");
        }
        else
        {
            printf("Divisible by 2 but not by 3\n");
        }
    }
    else
    {
        printf("Not divisible by 2\n");
    }

    return 0;
}
