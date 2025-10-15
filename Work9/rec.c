#include<stdio.h>


int func(int i)
{
    
    if(i==0)
        return 0;
    func(i-1);

    printf("In function\n");

}

int main()
{

    func(20);
}