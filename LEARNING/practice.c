#include <stdio.h>

int temp, var1, var2, t=0, princ, rate, tm, thr, hun, ten, one, scr, day, num1, num2, ope, num3, i, num4, sum, num5, j;

unsigned long long fact=1;

int main()
{
    printf("Enter a temperature in Celsius \n");
    scanf("%d", &temp);
    
    printf("This temperature in Fahrenheit is : %d\n",(int)(temp * 9/5) +32 );
    
    printf("Enter a Variable \n");
    scanf("%d", &var1);
    printf("Enter another Variable \n");
    scanf("%d", &var2);
    
    t=var1;
    var1=var2;
    var2=t;
    
    printf("After swap var1 = %d, var2 = %d\n", var1, var2);
    
    printf("Enter a Principal \n");
    scanf("%d", &princ);
    printf("Enter a Rate \n");
    scanf("%d", &rate);
    printf("Enter a Time \n");
    scanf("%d", &tm);
    
    printf("The simple interest is : %d\n ", (int)(princ * rate * tm)/100);
    
    printf("Enter a 3 digit number \n");
    scanf("%d", &thr);
    
    hun = thr / 100;
    ten = (thr / 10) % 10;
    one = thr % 10;
    
    printf("Hundreds : %d\n", hun);
    printf("Tens : %d\n", ten);
    printf("Ones : %d\n", one);
    
    printf("Enter the students Score \n");
    scanf("%d", &scr);
    
    if(scr >= 90 && scr <= 100)
    {
        printf("Student scored an A\n");
   
    }
    else if( scr >=80 && scr <= 89)
    {
        printf("Student scored a B\n");
    
    }
    else if( scr >=70 && scr <= 79)
    {
        printf("Student scored a C\n");
    
    }
    else if( scr >=60 && scr <= 69)
    {
        printf("Student scored a D\n");
   
    }
    else if( scr <=59)
    {
        printf("Student scored a F\n");
    
    }
    
    printf("Enter an Integer 1-7 \n");
    scanf("%d", &day);
    
    switch(day)
    {
    case 1:
        printf("The day is Monday \n");  
        break;
    case 2:
        printf("The day is Tuesday \n");  
        break;
    case 3:
        printf("The day is Wednesday \n");  
        break;
    case 4:
        printf("The day is Thursday \n");  
        break;
    case 5:
        printf("The day is Friday \n");  
        break;
    case 6:
        printf("The day is Saturday \n");  
        break;
    case 7:
        printf("The day is Sunday \n");  
        break;
    }
    
    printf("Enter a Number \n");
    scanf("%d", &num1);
    printf("Enter another Number \n");
    scanf("%d", &num2);
    
    printf("Select your operator : 1. Add 2. Subtract 3. Multiply 4. Divide \n");
    scanf("%d", &ope);
    
    switch(ope)
    {
        case 1:
            printf("These numbers added together equals : %d\n", (int)num1+num2);
        break;
        case 2:
            printf("These numbers subtracted together equals : %d\n", (int)num1-num2);
        break;
        case 3:
            printf("These numbers multiplied together equals : %d\n", (int)num1*num2);
        break;
        case 4:
        if(num2 != 0)
            printf("These numbers divided together equals : %f\n", (double)num1/num2);
        else
            printf("Cant divide by 0.\n");
        break;
        
    }
    
    printf("Enter a Number \n");
    scanf("%d", &num3);
    for(i=1; i <= num3; i++)
    {
        fact = fact*i;
    }
    printf("The factorial of this number is : %llu \n", fact);
    
    printf("Enter a number \n");
    scanf("%d", &num4);
    
    while (num4 > 0)
    {
        sum = sum + (num4 % 10);
        num4 = (num4 / 10);
    }
    printf("The sum of this numbers digits is : %d\n", sum);
    
    printf("Enter a number \n");
    scanf("%d", &num5);
    
    for(i=1; i <= num5; i++)
    {
        for(j=1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    
    return 0;
}

    