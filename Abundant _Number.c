#include <stdio.h>

void main()
{
    
    int number,i,tot=0;
    
    
    printf("number:");
    scanf("%d",&number);
    
    for(i=1;i<number;i++)
    { 
        
        if(number%i==0)
        { 
            
            printf("%d ",i);
            
            tot=tot+i;
            
        }
        
        
    }
    
    printf("=%d",tot);
    
    if(number<tot)
    { 
        
        printf(" Abundant number");
        
    }
    else
    { 
        
         printf(" Not Abundant number");
        
        
        
    }
    
    
    
}


