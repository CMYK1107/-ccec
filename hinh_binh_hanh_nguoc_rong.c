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
      if(i==0 || i==n-1 || j==0 || j==m-1){
        printf("*");
      }else{
      printf(".");
      }
    }
    d++;
    printf("\n");
  }
  return 0;
}