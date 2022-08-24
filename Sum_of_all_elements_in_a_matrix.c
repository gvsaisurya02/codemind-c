#include<stdio.h>
int main()
{
    int i,j,k,s=0,arr[10][10],n,m;
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
            s=s+arr[i][j];
        }
    }
    printf("%d",s);
}