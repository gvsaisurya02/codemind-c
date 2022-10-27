#include<stdio.h>
int main()
{
    long a[50],n,c=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
        c=c+a[i];
    }
    printf("%ld",c);
    return 0;
}