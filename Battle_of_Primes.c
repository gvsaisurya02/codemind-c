#include<stdio.h>
int main()
{
    int n1,n2,s,i,j;
    scanf("%d %d",&n1,&n2);
    s=n1+n2;
    for(i=1;i<=100;i++)
    {
        int fc=0;
        s=s+i;
        for(j=1;j<=s;j++)
        {
            if(s%j==0)
            {
                fc++;
            }
        }
        if(fc==2)
        {
            printf("%d",i);
            break;
        }
        else
        {
            s=n1+n2;
            fc=0;
        }
    }
    return 0;
}