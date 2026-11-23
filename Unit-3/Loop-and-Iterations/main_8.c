#include <stdio.h>

/*
Write a program to print the table of a number.
*/

int main ()
{
    int number;
    int multiple;

    printf("Enter number: ");
    scanf("%d", &number);

    printf("Table: \n");

    for (int i = 1; i <= 10; i++)
    {
        multiple = number * i;
        printf("%d\n", multiple);
    }

    return 0;
}
