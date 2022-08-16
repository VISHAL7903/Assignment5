#include<stdio.h>
int main()
{
    int x,i;
    printf("First N an even number");
    scanf("%d",&x);

    for(i=1;i<=x;i++)
    
    {
        if (i%2==0)
        printf("\n%d",i);
    
    }
    return 0;
    
}