// Write a C program that implements a simple menu system with the following options:
// Calculate the power of a number (ask the user for a base and an exponent). ( NOTE : Do not use Math.h functions) 
// Find the sum of numbers from 1 up to a given number n. (ask the user for n)
// Exit the program.
// The program should repeatedly display the menu until the user chooses to exit. Use appropriate conditional logic to handle the choices.
// Challenge Activity (Optional):
// Extend your program by adding an option to check whether the entered number is a prime number.
#include<stdio.h>

int main()
{
    int num,exp, power=1;

    printf("Enter the base number: ");
    scanf("%d",&num);
    printf("Enter the exponent: ");
    scanf("%d",&exp);
    

    for(int i=0;i<=exp;i++)
    {
        if(i==0)
            power= 1;
        else{
        power=power*num;
        }
        
    }

    printf("%d",power);

    
}