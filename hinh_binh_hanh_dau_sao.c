#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#define N 100004

int main(){
  int n;
  scanf("%d", &n);
  int a[n][2*n];
  int d=n;
  for(int i=0; i<n; i++){
    for(int j=0; j<2*n-(n-d); j++){
      if( j<d-1){
        printf("~");
      }
      if(j >=d && j < 2*n){
        printf("*");
      }
    }
    d--;
    printf("\n");
  }
  return 0;
}