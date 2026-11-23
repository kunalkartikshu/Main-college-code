#include <stdio.h>

/*
Write a program to list all leap years from 1920-2100
*/

int main ()
{
    int year = 1900;
    int b = 2100;
    printf("List of leap years: ");
    
    do{
        if (((year % 400) == 0) || (((year % 4) == 0) && ((year % 100) != 0)))
        {
            printf("%d, ", year);
        }
        year = year + 1;
    } while(year <= b);    
    
    return 0;
}