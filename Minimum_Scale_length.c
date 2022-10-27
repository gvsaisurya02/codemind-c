#include<stdio.h>
#include<math.h>
int main()
{
    int a[50],n,i,min=9999,res,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(min>a[i])
        {
            min=a[i];
        }
    }
    for(i=min;i>=1;i--)
    {
        res=0;
        for(j=0;j<n;j++)
        {
            if(a[j]%i!=0)
            {
                res=1;
                break;
            }
        }
        if(res==0)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}