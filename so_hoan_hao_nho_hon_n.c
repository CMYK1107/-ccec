#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>
#include<assert.h>

#define N 100004
// 6 28 496 8128
int main(){
  int n;
  scanf("%d",&n);
  if(n > 8128){
    printf("6 28 496 8128\n");
  }
  if(n <28){
    printf("6\n");
  }
  if(n < 496 && n > 28){
    printf("6 28\n");
  }
  if(n < 8128 && n > 496){
    printf("6 28 496\n");
  }
  return 0;
}