#include<stdio.h>
int main()
{
    int x,i;
    printf("enter the table");
    scanf("%d",&x);

    for(i=1;i<=10;i++)
    
    {
        
        printf("\n%d*%d=%d",x,i,x*i);
    
    }
    return 0;
    
}