#include<stdio.h>
int main()
{
    int l,n,w,h,i;
    scanf("%d",&l);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&w,&h);
        if(w<l || h<l)
        {
            printf("UPLOAD ANOTHER
");
        }
        else if(w>=l && h>=l)
        {
            if(w==h)
            {
                printf("ACCEPTED
");
            }
            else
            {
                printf("CROP IT
");
            }
        }
    }
    return 0;
}