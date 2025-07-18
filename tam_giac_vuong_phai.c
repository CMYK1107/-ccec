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
  int n;
  scanf("%d", &n);
  int d=n;
  for(int i=0; i<n; i++){
    d--;
    for(int j=0; j<d; j++){
      printf("~");
    }
    
    for(int j=0; j<=i; j++){
        printf("*");
    }
    printf("\n");
  }
  return 0;
}