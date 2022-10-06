#include<stdio.h>
int main()
{
    char s[50];
    fgets(s,sizeof(s),stdin);
    puts(s);
}