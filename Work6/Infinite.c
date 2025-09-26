#include<stdio.h>

//EXAMPLE WORK OFF OF THIS
void temp()
{
    //3rd
    printf("Printf temp calls itself\n");
    temp();
}

void main()
{
    //1st
    printf("Calls temp function\n");
    temp(); 
    //2nd
    printf("Control back to main\n");
}   //4th