
#include <stdio.h>

void main()
{

    int a,temp,r=0;
    
    printf("Enter number:");
    scanf("%d",&a);
    
      //number change with reverse
    while(a!=0)
    { 
        
        temp=a%10;
        
        if(temp==0)
        { 
            
            temp=1;
            
        r=r*10+temp;
        
            
        }
        else{
        
        r=r*10+temp;
        
        }
        a=a/10;
        
            
        
        
    }
  
   
    //number will change coorect order
  
    int s,re=0;
     while(r!=0)
    { 
        
        s=r%10;
        
            
        re=re*10+s;
        
        r=r/10;
        
            
        
        
    }
    
    
    printf("Replace 0 & 1 Number:%d",re);
    
    
    
}


