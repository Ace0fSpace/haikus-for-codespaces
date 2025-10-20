#include<stdio.h>

int main(void)
{
    int score=50;
    int *score_ptr = score;
// or
    score_ptr= &score;
//= (0x1)

    *score_ptr= 100;
    int y=*score_ptr;
    
// y=100

    printf("The value of score_ptr is %d",score*20);

}