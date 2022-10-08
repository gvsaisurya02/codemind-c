#include<stdio.h>
int main()
{
    int n,a[50],i,j,b[50],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=int(n/2);i--)
    {
        b[c]=a[i];
        c++;
    }
    for(j=0;j<int(n/2);j++)
    {
        b[c]=a[j];
        c++;
    }
    for(i=0;i<n;i++)
    printf("%d ",b[i]);
}