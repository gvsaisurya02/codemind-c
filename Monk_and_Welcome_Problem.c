#include<stdio.h>
int main()
{
    int a[50],n,i,j,k,b[50],c[50];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(k=0;k<n;k++)
    {
        c[k]=a[k]+b[k];
        printf("%d ",c[k]);
    }
    return 0;
}