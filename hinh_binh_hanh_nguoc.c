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
  for(int i=0; i<n; i++){
    for(int i=0; i<d; i++) printf("~");
    for(int j=0; j<m; j++){
      printf("*");
    }
    d++;
    printf("\n");
  }
  return 0;
}