#include<stdio.h>
int main()
{
    int n,a[50],m,i,j,p=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        p=1;
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                continue;
            }
            else
            {
                p=p*a[j];
            }
        }
        printf("%d ",p);
    }
    return 0;
}