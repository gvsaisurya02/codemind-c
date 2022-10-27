#include<stdio.h>
#include<math.h>
int main()
{
    double p,r,t;
    scanf("%lf %lf %lf",&p,&r,&t);
    double c_i;
    c_i=p*1.0*pow(1+(r/100.0),t);
    printf("%.2lf",c_i);
    return 0;
}