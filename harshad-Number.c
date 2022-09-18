//Harshad Number

#include <stdio.h>

void main()
{
    
    int number,temp=0,t;
    
    printf("number:");
    scanf("%d",&number);
    
    while(number>0)
    { 
        
        t=number%10;
        
        temp=temp+t;
        
        number=number/10;
        
        
    }
    
    printf("%d",temp);
    
    
    int niv=number%temp;
    
    int tot=niv*temp;
    
    if(tot==number)
    { 
        
        printf(" Harshad Number");
    }
    else
    { 
        
         printf(" Not Harshad Number");
        
    }
    
    
    
    
    
    
    
    
    
    
    
}

