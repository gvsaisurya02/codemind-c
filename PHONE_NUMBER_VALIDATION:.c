#include<stdio.h>
int main()
{
    long int n;
    scanf("%ld",&n);
    if(n/1000000000==0)
    printf("Invalid");
    else if (n/10000000000!=0)
    printf("Invalid");
    else
    printf("Valid");
    
}