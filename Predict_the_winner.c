#include<stdio.h>
#include<math.h>
int main()
{
    int a[50],n,i,flag=1,x=0,y=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(flag==1)
        {
            x=x+a[i];
            flag=0;
        }
        else
        {
            y=y+a[i];
            flag=1;
        }
        
    }
    if(abs(x-y)%4==0)
    {
        printf("X");
    }
    else
    {
        printf("Y");
    }
}