#include<stdio.h>
int main()
{
    int a[50],n,i,j,flag=0,max=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
        {
            if(max<a[i])
            {
                max=a[i];
            }
        }
    }
    printf("%d",max);
    return 0;
}