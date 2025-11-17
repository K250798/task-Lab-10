#include <stdio.h>
#include <string.h>

char tolowerchar(char c)
{
    char caps[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char small[]="abcdefghijklmnopqrstuvwxyz";
    int i;
    for(i=0;i<26;i=i+1)
        if(c==caps[i])
            return small[i];
    return c;
}

void sortword(char s[])
{
    int n=strlen(s);
    int i,j;
    for(i=0;i<n-1;i=i+1)
    {
        for(j=0;j<n-1-i;j=j+1)
        {
            if(s[j]>s[j+1])
            {
                char t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
            }
        }
    }
}

int main()
{
    char a[101],b[101];

    printf("enter first word: ");
    scanf("%100s",a);

    printf("enter second word: ");
    scanf("%100s",b);

    int i;
    for(i=0;i<strlen(a);i=i+1)
        a[i]=tolowerchar(a[i]);

    for(i=0;i<strlen(b);i=i+1)
        b[i]=tolowerchar(b[i]);

    if(strlen(a)!=strlen(b))
    {
        printf("not anagrams\n");
        return 0;
    }

    sortword(a);
    sortword(b);

    if(strcmp(a,b)==0)
        printf("anagrams\n");
    else
        printf("not anagrams\n");

    return 0;
}
