#include<stdio.h>
int main()
{
    int e=0,o=0,n,a[50],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    printf("%d %d",e,o);
}