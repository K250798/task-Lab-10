#include <stdio.h>
#include <string.h>

int main()
{
    char names[5][31];
    int i;
    for(i=0;i<5;i=i+1)
    {
        printf("enter name %d: ",i+1);
        scanf("%s",names[i]);
    }

    int a;
    for(a=0;a<4;a=a+1)
    {
        for(i=0;i<4-a;i=i+1)
        {
            if(strcmp(names[i],names[i+1])>0)
            {
                char temp[31];
                strcpy(temp,names[i]);
                strcpy(names[i],names[i+1]);
                strcpy(names[i+1],temp);
            }
        }
    }

    printf("\nsorted names:\n");
    for(i= 0;i<5;i=i+1)
        printf("%s\n",names[i]);

    return 0;
}


