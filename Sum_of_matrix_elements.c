#include<stdio.h>
int main()
{
    int a[50][50],n,m,i,j,sum=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
            sum=sum+a[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}