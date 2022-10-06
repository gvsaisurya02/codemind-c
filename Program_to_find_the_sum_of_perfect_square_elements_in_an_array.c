#include<stdio.h>
#include<math.h>
int main()
{
    int s=0,n,a[50],i,sq;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sq=sqrt(a[i]);
        if(int(sq)*int(sq)==a[i])
        {
            s=s+a[i];
        }
        
    }
    printf("%d",s);
    
}