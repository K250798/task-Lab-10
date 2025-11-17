#include <stdio.h>
#include <string.h>

int main(){
 char names[5][31];
 int i;
 for(i=0;i<5;i=i+1){
    printf("enter name %d: ",i+1);
    scanf("%s",names[i]);
 }
 printf("\nstored names:\n");

for(i= 0;i<5;i=i+1) {
    printf("%s\n",names[i]);
}
 return 0;
}
