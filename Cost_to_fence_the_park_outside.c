#include<stdio.h>
int main()
{
    int l,b,w,c,nl,nb,sum,nsum,res,cost;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    sum=l*b;   
    nl=l+(2*w);
    nb=b+(2*w);
    nsum=nl*nb;
    res=nsum-sum;
    cost=res*c;
    printf("%d",cost);
    
    
}