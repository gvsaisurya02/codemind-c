#include<stdio.h>
int main()
{
    int n,a[20],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d
",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int p=1,r;
        for(j=1;j<=a[i];j++)
        {
            p=p*j;
        }
        printf("%d
",p);
    }
    return 0;
}