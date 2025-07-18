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
    d--;
    for(int j=0; j<2*n-(n-d); j++){
      if( j<d){
        printf("~");
      }
      else if(j == d || j == 2*n-(n-d)-1 || i == 0 || i == n-1 ){
        printf("*");
      }
      else printf("~");
    }
    printf("\n");
  }
  return 0;
}