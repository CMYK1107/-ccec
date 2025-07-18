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
  int n,m,res=0,tmp=0;
  scanf("%d %d",&n,&m);
  for (int i = 0; i < n; i++){
    res=0;
    for(int j=i; j<m; j++){
      printf("%c", 65+j-1);
      tmp=65+j-1;
      res++;
    }

    for(int j=0; j<m-res; j++){
      printf("%c", tmp);
    }
    printf("\n");
  }
  
  return 0;
}