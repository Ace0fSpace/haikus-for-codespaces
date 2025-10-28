#include <stdio.h>


int addByValue(int num) 
{
    num += 67; 
    return num;
}
int addByReference(int *numPtr)
{
    *numPtr += 15;
}
int main() 
{
    int a = 10, b = 20, result = addByValue(a);  

    printf("Original value of a: %d\n", a);
    
    printf("Returned value from addByValue: %d\n", result);
    printf("Value of a after addByValue: %d\n", a); 


    printf("Original value of b: %d\n", b);
    addByReference(&b);  
    printf("Value of b after addByReference: %d\n", b); 

    return 0;
}