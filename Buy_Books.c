#include<stdio.h>
#include<math.h>
int main()
{
    int a[50],b[50],i,sa=0,sb=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sa=sa+a[i];
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        sb=sb+b[i];
    }
    int result=sb-sa;
    if(result<0)
    {
        printf("0");
    }
    else
    {
        printf("%d",result);
    }
    return 0;
}