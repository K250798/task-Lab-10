#include <stdio.h>
#include <string.h>

int isvowel(char c)
{
    if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
       return 1;
    return 0;
}

int main()
{
   char names[5][31];
   int i;

   for(i=0;i<5;i=i+1)
   {
      printf("enter name %d: ",i+1);
      scanf("%s",names[i]);
   }

   for(i=0;i<5;i=i+1)
   {
      int j;
      int cnt= 0;

      for(j=0;j<strlen(names[i]);j++)
      {
         if(isvowel(names[i][j]))
            cnt++;
      }

      printf("\n%s:  %d vowels\n",names[i],cnt);
   }

   return 0;
}


