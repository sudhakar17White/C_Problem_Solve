//friendly Pair
#include <stdio.h>

void main()
{ 
    
    int a,b,i,s1=0,s2=0;
    
    
    //Get the value input from the user
    printf("Enter the two numbers:");
    scanf("%d %d",&a,&b);
    
    //this loop for first number
    for(i=1;i<a;i++)
    { 
        
        if(a%i==0)
        { 
            
            s1=s1+i;
            
            
        }
        
        
    }
    //this loop for second number
    for(i=1;i<b;i++)
    { 
        
        if(b%i==0)
        { 
            
            s2=s2+i;
            
            
        }
        
        
    }
    
   
  
    
    
    
    //to check the condition for friendly 
    if(s1==a&&s2==b)
    { 
        
        printf("Friendly Pair");
        
    }
    else
    { 
        
        printf("Not Friendly Pair");
        
        
    }
    
    
    
    
    
    
    
    
}
