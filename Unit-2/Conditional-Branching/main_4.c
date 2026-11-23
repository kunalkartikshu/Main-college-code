#include <stdio.h>

/*
While purchasing certain items, a discount of 10% is offered if the quantity 
purchased is more than 1000. If quantity and price per item are input 
through the keyboard, write a program to calculate the total expenses.
*/

int main ()
{
    int quantity;
    int price;
    int expenses;
    
    printf("Enter the price of one item: ");
    scanf("%d", &price);
    
    printf("Enter the quantity: ");
    scanf("%d", &quantity);
    
    if(quantity > 1000)
    {
        expenses = quantity * price * 0.9;
    }
    else
    {
        expenses = quantity * price;
    }
    
    printf("Your total expenses are: %d", expenses);
        
    return 0;
}
