#include<stdio.h>
int main()
{
    int a[50],n,i,j,c=0,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]>a[j])
                {
                    c++;
                }
            }
        }
        printf("%d ",c);
    }
    return 0;
}