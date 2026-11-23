#include <stdio.h>

/*
Write a simple calculator program
*/

int main(){
   int choice;
   float number1;
   float number2;
   float output;
    
   printf("Enter first number: \n");
   scanf("%f", &number1);
   
   printf("Enter second number: \n");
   scanf("%f", &number2);
   
   printf("Please choose an option (1-4): \n");
   printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");   
   printf("Enter a number from 1-4: ");
   scanf("%d", &choice);
   
   switch (choice) {
       case 1:
           output = number1 + number2;
           break;
       case 2:
           output = number1 - number2;
           break;
       case 3: 
           output = number1 * number2;
           break;
       case 4:
           if(number2 != 0){
               output = number1 / number2;
           }
           break;
       default:
          printf("Please enter a valid choice.\n");
    }
    
   printf("The output is %.2f", output);
   return 0;
}
   