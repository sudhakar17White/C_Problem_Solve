//Two array same

#include <stdio.h>

void main()
{
    printf("Array Are Same or Are Not\n\n");

    int i,j,l1,l2;

    printf("Enter the Limit for First array :");
    scanf("%d",&l1);
    
    printf("\nEnter the limit for Second array:");
    scanf("%d",&l2);
    
    int a[l1];
    int b[l2];
    
    //Input from user
    
    printf("Enter The Element for 1st Array:\n");
    for(i=0;i<l1;i++)
    { 
        
        scanf("%d",&a[i]);
        
    }
    
    
    printf("Enter The Element for 2nd Array:\n");
    for(i=0;i<l2;i++)
    { 
        
        scanf("%d",&b[i]);
        
    }
    
    int flag=0;
    
    if(l1==l2)
    {
    
        
        for(i=0;i<l1;i++)
        { 
            
            if(a[i]==b[i])
            { 
                
                flag=2;
                
            }
            else
            { 
                
                flag=1;
                break;   
            }
            
        }
        
    
    
       
    }
    else
    { 
        
        printf("Two limit are Not Equal");
        
    }
    
    
    //checking part 
    
    if(flag==1)
    { 
     
        printf("Not Same Element");
        
    }    
    else if(flag==2)
    { 
        
        printf("Same limit and Element");
        
    }
    
}
