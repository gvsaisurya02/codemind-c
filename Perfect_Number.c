#include<stdio.h>
int main()
{
    int num,i,sum=0;
    scanf("%d",&num);
    for(i=1;i<=num/2;i++)
    {
        if(num%i==0)
        sum=sum+i;
    }
    if(sum==num)
    printf("True");
    else
    printf("False");
  
}