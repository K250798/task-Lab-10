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

  char target[31];
  printf("enter name to search: ");
  scanf("%s",target);

  int found=0;

  for(i=0;i<5;i=i+1)
  {
     if(strcmp(names[i],target)==0)
     {
        found= 1;
        break;
     }
  }

  if(found==1)
     printf("name found!\n");
  else
     printf("name not found!\n");
  return 0;
}
