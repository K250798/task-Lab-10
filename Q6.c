#include <stdio.h>
#include <string.h>

int main()
{
    char first[3][31];
    char last[3][31];
    char fullname[3][63];
    int i;

    for(i=0;i<3;i=i+1)
    {
        printf("enter first name %d: ",i+1);
        scanf("%s",first[i]);

        printf("enter last name %d: ",i+1);
        scanf("%s",last[i]);
    }

    for(i=0;i<3;i=i+1)
    {
        strcpy(fullname[i],first[i]);
        strcat(fullname[i]," ");
        strcat(fullname[i],last[i]);
    }

    for(i= 0;i<3;i=i+1)
        printf("\n%s",fullname[i]);

    return 0;
}


