#include <stdio.h>
int stopin=4231, ate=2, men;
int main()

{
    printf("Enter your 4-digit PIN:\n");
    scanf("%d", &stopin);
    
    while(stopin!=4231)
    {
        printf("Incorrect PIN. Try again.\n");
        scanf("%d", &stopin);
        (ate==1,ate<3,ate++);
        
        if(ate>3 && stopin!=4231) 
        {
            printf("Access Denied");
            break;
        }
    }
    while(stopin==4231)
    {
        printf("PIN verified. Proceeding to key management Menu.");
        break;
    }  
        printf("Key Management\n Menu:\n 1.Change key\n 2.Reset key to 1234\n 3. Display current key\n 4.Exit\n");
        scanf("%d", &men);
        
        switch(men)
        {
            case 1:
            
            break;
            case 2:
            
            break;
            case 3:
            
            break;
            case 4:
            break;
        }
}