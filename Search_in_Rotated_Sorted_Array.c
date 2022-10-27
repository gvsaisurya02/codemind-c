#include<stdio.h>
int main()
{
    int a[50],n,t,i,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(a[i]==t)
        {
            printf("%d ",i);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("-1 ");
    }
    return 0;
}