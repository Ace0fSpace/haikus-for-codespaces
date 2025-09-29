#include<stdio.h>

int fun6(int n)
{
    printf("Value of n passed from main = %d\n",n);
    int result = n*2;
    return result;
}
int fun5(int n)
{
    int result= fun6(n);
    return result;
}
int fun4(int n)
{
    int result= fun5(n);
    return result;
}
int fun3(int n)
{
    int result= fun4(n);
    return result;
}
int fun2(int n)
{
    int result= fun3(n);
    return result;
}
int fun1(int n)
{
    int result= fun2(n);
    return result;
}

int main()
{
    int result= fun1(20);
    printf("Result is :%d\n",result);
}
    