#include<stdio.h>
int main()
{
    int arr[100],i,n,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
    if(arr[i]%2==0)
    {
        if(i%2!=0)
        {
            flag=1;
            break;
        }
    }
    }
    if(flag==0)
    printf("True");
    else
    printf("False");
    return 0;
}