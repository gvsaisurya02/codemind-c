#include<stdio.h>
int main()
{
    int num,temp,r,sum=0;
    scanf("%d",&num);
    temp=num;
    while (num>0)
    {
        r=num%10;
        sum=sum*10+r;
        num=num/10;
    }
    printf("%d",sum);
}