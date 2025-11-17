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

    int maxindex=0;
    int maxlen=strlen(names[0]);

    for(i=1;i<5;i=i+1)
    {
        if(strlen(names[i])>maxlen)
        {
            maxlen= strlen(names[i]);
            maxindex=i;
        }
    }

    printf("longest name: %s\nlength: %d\n",names[maxindex],maxlen);
    return 0;
}
