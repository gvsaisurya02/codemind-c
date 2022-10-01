#include<stdio.h>
#include<math.h>
int main()
{
    int a[50],n,i,j,d,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        d=floor(log10(a[i])+1);
        if(d%2==0)
        {
            c+=1;
        }
    }
    printf("%d",c);
}