#include<stdio.h>
int main()
{
    int c[50],n,ec,max=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
        if(max<c[i])
        {
            max=c[i];
        }
    }
    scanf("%d",&ec);
    for(i=0;i<n;i++)
    {
        if(c[i]+ec>=max)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
    return 0;
    
}