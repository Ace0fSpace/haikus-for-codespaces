#include<stdio.h>

int a=5;

int main()
{
    int *ptr_a;
    ptr_a=&a;

printf("%d\n",ptr_a);
printf("%d", *ptr_a);
}
