#include<stdio.h>
int main()
{
    int n,j,a[50],l,sum=0,k;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        scanf("%d",&l);
        for(k=0;k<n;++k)
        {
            if(a[k]>l)
            {
                sum=sum+2;
            }
            else
            {
                sum=sum+1;
            }
        }
        printf("%d",sum);
    return 0;
    
}