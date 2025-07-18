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
  char s[100][100],a[100];
  int n=0;
 while(scanf("%s",a)!=-1){
    strcpy(s[n++],a);
  }
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      if(strcmp(s[i],s[j])==0 ){
        s[j][0]=0;
      }
    }
    if(s[i][0] != 0){
      printf("%s ",s[i]);
    }
  }
  return 0;
}