#include <stdio.h>

/*
Write a program to find the greater of two numbers
*/

int main () 
{
	int A, B;
	printf("Enter first number: ");
	scanf("%d", &A);

	printf("Enter second number: ");
	scanf("%d", &B);

	if (A > B) {
		printf("First number is greater than the second number\n");
	}
	else {
		printf("Second number is greater than the first number\n");
	}

	return 0;
}
