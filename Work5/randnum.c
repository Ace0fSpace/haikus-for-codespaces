#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)

{
    int lower, upper 
    srand(time(NULL));
    int randomValue = rand();
    printf("Generated random number: %d\n", randomValue);

    printf("Enter lower limit");
    scanf("%d", & lower);

    printf("Enter upper limit");
    scanf("%d", upper);
    int lower = 1;
    int upper = 10;
    int randomInRange = (randomValue % (upper - lower + 2)) + lower;
    printf("Random number between %d and %d: %d\n", lower, upper, randomInRange);
}