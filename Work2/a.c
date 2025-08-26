#include<stdio.h>
#include<stdbool.h>

int main()
{
    char FirstLetter = 'W';
    int age = 19;
    float height = 5.9;
    bool isStudent = true;

    printf("First letter of last name: %c\n", FirstLetter);
    printf("Age: %d\n", age);
    printf("Height: %.2f feet\n", height);
    printf("Student: %s\n", isStudent ? "true" : "false");

    return 0;
}