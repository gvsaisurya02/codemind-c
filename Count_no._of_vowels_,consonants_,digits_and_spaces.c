#include<stdio.h>
#include<string.h>
int main()
{
    int v=0,c=0,d=0,sp=0,i=0;
    char s[50];
    scanf("%[^
]s",s);
    while(s[i]!=NULL)
    {
        if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] =='o' || s[i]=='O' || s[i] == 'u' || s[i] == 'U')
        {
            v++;
        }
        else if(s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4' || s[i]=='5' || s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9' || s[i]=='0')
        {
            d++;
        }
        else if(s[i]==' ')
        {
            sp++;
        }
        else
        {
            c++;
        }
        i++;
    }
    printf("Vowels: %d
", v);
    printf("Consonants: %d
", c);
    printf("Digits: %d
", d);
    printf("White spaces: %d", sp);
}