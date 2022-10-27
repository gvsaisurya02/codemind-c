#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,j,su=0,c=0;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;++i)
    {
        su=0;
        for(j=i;j<=b;j++)
        {
            su+=j;
            if(su%2!=0)
            {
                c+=1;
            }
        }
    }
    printf("%d",c);
    return 0;
}