#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>
#include<assert.h>

#define N 100004
// A : 65
int main(){
  int n,m,res,tmp=0;
  scanf("%d %d",&n,&m);
  for(int i=0; i<n; i++){
    res=0;
    for(int j=i; j<m; j++){
      printf("%c",65+j);
      res++;
    }
    for(int j=m-res-1; j>=0; j--){
      printf("%c",65+j);
    }
    printf("\n");
  }
  return 0;
}