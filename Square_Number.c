#include<stdio.h>
int main()
{
    int n,i,j,flag=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if((i*i)+(j*j)==n)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
    printf("True");
    else
    printf("False");
}