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

int main()
{
    char full[101];
    char copy[101];

    printf("enter full name: ");
    fgets(full,101,stdin);

    if(full[strlen(full)-1]=='\n')
        full[strlen(full)-1]='\0';

    strcpy(copy,full);

    char firstinitial[2];
    char lastname[51];
    firstinitial[0]='\0';
    lastname[0]='\0';

    char *token;
    token=strtok(copy," ");

    if(token!=NULL)
    {
        firstinitial[0]=token[0];
        firstinitial[1]='\0';

        while(token!=NULL)
        {
            strcpy(lastname,token);
            token=strtok(NULL," ");
        }
    }

    int i;
    int count= 0;
    for(i=0;i<strlen(full);i=i+1)
        if(full[i]!=' ')
            count=count+1;

    char username[160];
    username[0]='\0';

    strcat(username,firstinitial);
    strcat(username,lastname);

    for(i=0;i<strlen(username);i=i+1)
        username[i]=tolowerchar(username[i]);

    char numchar[20];
    sprintf(numchar,"%d",count);
    strcat(username,numchar);

    printf("generated username: %s\n",username);

    return 0;
}


