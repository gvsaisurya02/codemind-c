#include<stdio.h>
int main()
{
    int a[20],c=0,n,r,i,flag=0,j;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        a[c]=r;
        n=n/10;
        c+=1;
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    flag=1;
                    break;
                }
            }
        }
    }
    if(flag==1)
    {
        printf("Not Unique Number");
    }
    else
    {
        printf("Unique Number");
    }
}