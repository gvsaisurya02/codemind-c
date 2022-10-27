#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,j,a[50],k,s=0,sum=0,m;
        scanf("%d",&n);
        for(j=0;j<n-1;j++)
        {
            scanf("%d",&a[j]);
            s=s+a[j];
        }
        sum=n*(n+1)/2;
        m=sum-s;
        printf("%d
",m);
    }
    return 0;
}