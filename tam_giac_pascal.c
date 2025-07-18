#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>
#include<assert.h>

#define N 100004
int giai_thua(int n){
  if(n==0 || n==1) return 1;
  return n*giai_thua(n-1);
}
int main(){
  int n;
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    for(int j=0; j<=i; j++){
      printf("%d ",giai_thua(i)/(giai_thua(j)*giai_thua(i-j)));
    }
    printf("\n");
  }
  return 0;
}