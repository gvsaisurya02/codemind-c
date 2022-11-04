#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,j=0,i,k,n;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        n=0;
        if(i==1)
        {
            continue;
        }
        for(k=2;k<=sqrt(i);k++)
        {
            if(i%k==0)
            {
                n++;
                break;
            }
        }
        if(n==0)
        {
            j++;
        }
    }
    printf("%d",j);
}