#include<stdio.h>
int main()
{
    int a[50],n,i,j,flag=0,p=0,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=-1)
        {
        flag=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    flag++;
                    a[j]=-1;
                }
            }
        }
        p=p+flag/2;
        }
    }
    printf("%d",p);
    return 0;
}