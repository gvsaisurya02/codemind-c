#include<stdio.h>
int main()
{
    int n,c=0,d=1,z,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",c);
        z=c+d;
        c=d;
        d=z;
    }
    return 0;
}