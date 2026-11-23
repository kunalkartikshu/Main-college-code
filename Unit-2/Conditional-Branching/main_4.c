# include <stdio.h>

/*
In a company an employee is paid as under: If his basic salary is less
than Rs. 1500, then HRA = 10% of basic salary and DA = 90% of basic salary. 
If his salary is either equal to or above Rs. 1500, then HRA = Rs. 500 and 
DA = 98% of basic salary. If the employee's salary is input through the keyboard 
write a program to find his gross salary.
*/

int main( )
{
    float basicSalary, grossSalary, da, hra ;
    
    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);
    
    if (basicSalary < 1500)
    {
        hra = basicSalary * 10 / 100 ;
        da = basicSalary * 90 / 100 ;
    }
    else
    {
        hra = 500 ;
        da = basicSalary * 98 / 100 ;
    }

    grossSalary = basicSalary + hra + da ;
    
    printf("Gross Salary = Rs. %.2f\n", grossSalary);

    return 0 ;
}
