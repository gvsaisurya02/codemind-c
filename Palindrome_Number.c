#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,i,r,s=0,temp;
        scanf("%d",&n);
        temp=n;
        while(n>0)
        {
            r=n%10;
            s=(s*10)+r;
            n=n/10;
        }
        if(temp==s)
        {
            printf("True
");
        }
        else
        printf("False
");
    }
}