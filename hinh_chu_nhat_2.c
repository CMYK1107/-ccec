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
  int n,m,d=0;
  scanf("%d %d", &n, &m);
  for(int i=1; i<=n; i++){
    d=0;
    for(int j=i; j<=m;j++){
      printf("%d", j);
      d++;
    }
    if(i <= m){
      for(int j=m-1; j>=d; j--){
        printf("%d", j);
      }
    }
    else{
      int k=i;
      for(int j=1; j<=m ;j++){
        printf("%d", k--);
      }
    }
    printf("\n");
  }
  return 0;
}