#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>
#include<assert.h>
int giai_thua(int n){
  if(n==0 || n==1) return 1;
  return n*giai_thua(n-1);
}
int vtri(int n,int k){
   return giai_thua(n)/(giai_thua(k)*(giai_thua(n-k)));
}
int main(){
  int n;
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    for(int j=0; j<=i; j++){
      printf("%d ", vtri(i,j));
    }
    printf("\n");
  }
  return 0;
}