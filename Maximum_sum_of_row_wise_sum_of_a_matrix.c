#include<stdio.h>
int main()
{
    int a[50][50],n,i,j,k,m,sum=0,max=-1;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<m;j++)
        {
            sum=sum+a[i][j];
        }
        if(sum>max)
        {
            max=sum;
        }
    }
    printf("%d",max);
    return 0;
}