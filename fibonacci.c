#include<stdio.h>
int main()
{
    int n,n1=0,n2=1,c=0,n3;
    scanf("%d",&n);
    while(c<n)
    {
        printf("%d ",n1);
        n3=n1+n2;
        n1=n2;
        n2=n3;
        c++;
    }
    return 0;
}