#include<stdio.h>
int main()
{
    int x,i;
    printf("First N an even number in reverse order");
    scanf("%d",&x);

    for(i=x;i>=1;i--)
    
    {
        if (i%2==0)
        printf("\n%d",i);
    
    }
    return 0;
    
}