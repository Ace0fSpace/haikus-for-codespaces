#include<stdio.h>

int main()
{
    int num,exp, power=1;


    do
    {
        printf("Enter choice \n 1.Power 2.Sumton 3.Exit :");
        scanf("%d", &choice);

        if(choice ==1)
        {
            printf("Enter the base number: ");
            scanf("%d",&num);

            printf("Enter the exponent: ");
            scanf("%d",&exp);
        
            for(int i=0;i<=exp;i++)
        {
            if(i==0)
                power= 1;
            else{
            power=power*num;
            }
            
        }
        else if(choice ==2)
        {
            printf("%d",power);


            printf("Enter the base number: ");
            scanf("%d",&num);
         int sum=0;

            while(num>0)
        {
            sum= sum+ num;
            num--;
        }

            printf("Sum =%d",sum);
    }while(choice !=3);
        }
        

        
    
}