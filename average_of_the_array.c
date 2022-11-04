#include<stdio.h>
int main()
{
    int n,a[30],i;
    float s=0,avg=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    avg=s/n;
    printf("%0.2f",avg);
    
}