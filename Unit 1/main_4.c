#include <stdio.h>

/*
Write a program to take base salary as input, and calculate the gross salary.
House rent allowance is 20% of the base salary and dearness allowance is
40% of the base salary.
*/

int main()
{
    int baseSalary;
    int grossSalary;
    int houseRentAllowance;
    int dearnessAllowance;

    printf("Enter base salary: ");
    scanf("%d", &baseSalary);

    houseRentAllowance = 0.2 * baseSalary;
    dearnessAllowance = 0.4 * baseSalary;

    grossSalary = baseSalary + houseRentAllowance + dearnessAllowance;

    printf("Gross salary is: %d", grossSalary);

    return 0;
}