#include <stdio.h>

int main ()
{
    int number;
    int original;
    int reverse = 0;
    int digit;

    printf("Enter number: ");
    scanf("%d", &number);

    original = number;

    while (number != 0)
    {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number = number / 10;
    }

    if (reverse == original)
    {
        printf("It is a Palindrome Number\n");
    }
    else
    {
        printf("It is not a Palindrome Number\n");
    }

    return 0;
}
