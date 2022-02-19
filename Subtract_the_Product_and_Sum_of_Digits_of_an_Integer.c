#include<stdio.h>
int main()
{
    int num,r,sum=0,prod=1,res;
    scanf("%d",&num);
    while(num>0)
    {
        r=num%10;
        sum=sum+r;
        prod=prod*r;
        res=prod-sum;
        num=num/10;
    }
    printf("%d",res);
}