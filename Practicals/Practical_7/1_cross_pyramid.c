#include <stdio.h>  
  
int main()  
{
    printf("\n");
    
    int n,m=1; 
    printf("Enter the number of columns: ");  
    scanf("%d",&n);  

    printf("\n\n");

    for(int i=1;i<=n;i++)  
    {  
        for(int j=1;j<=i;j++)  
        {  
            printf("* ");  
        }  
        printf("\n");  
    }  
    for(int i=n-1;i>=1;i--)  
    {  
        for(int j=1;j<=i;j++)  
        {  
            printf("* ");  
        }  
        printf("\n");  
    }

    printf("\n\n");

    return 0;  
}  