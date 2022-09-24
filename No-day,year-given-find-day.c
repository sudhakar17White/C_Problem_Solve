
#include <stdio.h>

void main()
{

    int m,y,leap;
    
    printf("Enter Month:");
    scanf("%d",&m);
    
    printf("Enter Year:");
    scanf("%d",&y);
    
    
    if(m==0&&y==0||m==0||y==0)
    { 
        
        printf("Invalid");
        
    }
    else{
      
        //leap year check
        if(m==2)
        {
        if(y%4==0&&y%400==0)
         { 
            
             printf("28");
                 
         }
        }
        
      else
        {
    
    
             if(m%2==0)
              { 
      
        
                  printf("30");
        
        
        
                }
                 else if(m%2!=0)
                { 
        
                     printf("31");
                 }
    
        }
    
    }    
}

