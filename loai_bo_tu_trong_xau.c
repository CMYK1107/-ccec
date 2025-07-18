#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>
#include<assert.h>

#define N 100004

int main(){
  char s1[100][100];
  int n=0;
  while(scanf("%s",s1[n++])!=-1){
    if(getchar()=='\n') break;
  }
  char s2[100];
  scanf("%s",s2);
  for(int i=0; i<n; i++){
    if(strcmp(s1[i],s2)!=0)
    printf("%s ",s1[i]);
  }

  return 0;
}