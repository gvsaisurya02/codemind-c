#include<stdio.h>
int main()
{
        int n,j,k,l,odd=0;
        scanf("%d",&n);
        int a[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            if(a[j]%2!=0)
            {
                odd++;
            }
        }
        if(odd<=2)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    return 0;
}