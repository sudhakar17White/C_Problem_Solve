#include <stdio.h>

void main()
{
    int num,i,a,flag=0;
    printf("enter the number 65 to 122:");
    scanf("%d",&num);
    
    
    
    for(i=65;i<=122;i++)
    { 
        
        if(num==i)
        { 
         if(i>=65&&i<=90)
        {
            
             flag=1;
            
             break;
            
        }   
        else if(i>=97&&i<122)
        { 
        
            flag=2;
            break;
        }
        else
        { 
            
            
            break;
            
            
        }
        
        }
        
    }
    
    if(flag==1)
    { 
        
    printf("Upper case Letter :");
    printf("%c",i);
    
        
    }
    else if(flag==2)
    { 
        
        
    printf("lower case Letter :");
    printf("%c",i);
    
    
    }
    else
    { 
        printf("notu");
    }
    
    
    
   
    
    
    
    
}

