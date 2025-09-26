#include <stdio.h>
// Function decleration/def
int add_two(int a,int b,int c,int d, int e)
{
    printf("%d\n",a);
}
void main()
{
    int var1,var2;
    printf("Entered function\n");
     add_two(8,7,6,5,4); // Function call
    printf("End function");
    
}