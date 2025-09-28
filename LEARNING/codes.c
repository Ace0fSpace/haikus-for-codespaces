#include<stdio.h>
int main()
{
	int var1, var2, ph=100, t, rate, principal, score, day, num1, num2, ope, num3, i, num4, sum=0, num5;
	float temp;
	unsigned long long fact=1;

	printf("Enter Temperature in Celsius: \n");
	scanf("%f", &temp);


	printf("Temperature from Celsius to Farenheit: %.2f \n",(float)temp*9/5+32 );

	printf("Enter Variable 1: \n");
	scanf("%d", &var1);
	printf("Enter Variable 2: \n");
	scanf("%d", &var2);

	ph=var1;
	var1=var2;
	var2=ph;

	printf("After swap var1 = %d, and var2: %d\n", var1, var2);

	printf("Enter the Principal: \n");
	scanf("%d", &principal);
	printf("Enter the Rate: \n");
	scanf("%d", &rate);
	printf("Enter the Time: \n");
	scanf("%d", &t);

	printf("Simple Interest over Time: %f\n", (double)(principal*rate*t)/100);

	printf("Enter the students Score: \n");
	scanf("%d", &score);

	if(score >=90 && score <=100)
	{
		printf("Student Scored an A\n");
	}
	else if(score >=80 && score <=89)
	{
		printf("Student Scored an B\n");
	}
	else if(score >= 70 && score <=79)
	{
		printf("Student Scored an C\n");
	}
	else if(score >=60 && score <=69)
	{
		printf("Student Scored an D\n");
	}
	else
	{
		printf("Student Scored an F\n");
	}

	printf("Enter an integer 1-7:");
	scanf("%d", &day);

	switch(day)
	{
	case 1:
		printf("Monday\n");
		break;
	case 2:
		printf("Tuesday\n");
		break;
	case 3:
		printf("Wednesday\n");
		break;
	case 4:
		printf("Thursday\n");
		break;
	case 5:
		printf("Friday\n");
		break;
	case 6:
		printf("Saturday\n");
		break;
	case 7:
		printf("Sunday\n");
		break;
	}
	printf("Enter Number 1: \n");
	scanf("%d", &num1);
	printf("Enter Number 2: \n");
	scanf("%d", &num2);

	printf("Select your operator: 1. Add, 2.Subtract, 3.Multiply, 4.Divide \n");
	scanf("%d", &ope);

	switch(ope)
	{
	case 1:
		printf("The total is : %d\n", (int)num1+num2);
		break;
	case 2:
		printf("The total is : %d\n", (int)num1-num2);
		break;
	case 3:
		printf("The total is : %d\n", (int)num1*num2);
		break;
	case 4:
		if(num2 != 0)
			printf("The total is : %f\n", (double)num1/num2);
		else
			printf("Error: Cannot divie bt zero\n");
		break;

	}

	printf("Enter a Number : \n");
	scanf("%d", &num3);
	for(i=1; i <= num3; i++)
	{
		fact = fact*i;
	}
	printf("The factorial of this number is : %llu\n", fact);

	printf("Enter a Number : \n");
	scanf("%d", &num4);

	while (num4 > 0)
	{
		sum = sum + (num4 % 10);
		num4 = (num4 / 10);
	}
	printf("The sum of this number's digits is : %d\n", sum);

	printf("Enter a number : \n");
	scanf("%d", &num5);

	for(int i=1; i <= num5; i++)
	{
		for(int j=1; j <= i; j++)
			printf("*");
		printf("\n");
	}



	return 0;
}

