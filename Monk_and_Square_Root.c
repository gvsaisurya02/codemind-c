#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,m,f=0;
        long long int j;
        scanf("%d %d",&n,&m);
        for(j=0;j<m;j++)
        {
            if((j*j)%m==n)
            {
                printf("%lld
",j);
                f=1;
                break;
            }
        }
        if(f==0)
        {
            printf("-1
");
        }
    }
    return 0;
}