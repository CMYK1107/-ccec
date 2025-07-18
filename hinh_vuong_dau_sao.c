#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#define N 100004

int main(){
  int n;
  scanf("%d", &n);
  int a[n][n];
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}