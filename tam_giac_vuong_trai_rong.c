#include<stdio.h>
#define N 100004
int main(){
  int n;
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    for(int j=0; j<=i; j++){
      if(i == j || i == n-1 || j==0 )printf("*");
      else printf(".");
    }
    printf("\n");
  }
  return 0;
}