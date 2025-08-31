#include<stdio.h>
#include<stdbool.h>

int main()
{

    int var2; 
    char var1; 
    double var3; 
    bool var4;

    printf("Enter the first letter of your last name: ");
    scanf("  %c", &var1);

    printf("Enter your age: ");
    scanf("%d", &var2);

    printf("Enter your height in feet: ");
    scanf("%lf", &var3);

    printf("Are you a student: ");
    scanf("%d", (int*)&var4);

    printf("First letter of last name: %c\n", var1);
    printf("Age: %d\n", var2);
    printf("Height: %.2f feet\n", var3);
    printf("Student: %s\n", var4 ? "Yes" : "No");
    
    return 0;
} 
   