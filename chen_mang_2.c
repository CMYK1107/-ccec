#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#define N 100004

int main(){
  int t;
  scanf("%d", &t);
  int res=t;
  while(t--){
    int n,m,k;
    scanf("%d %d %d", &n, &m, &k);
    int a[n], b[m];
    for(int i=0; i<n; i++){
      scanf("%d", &a[i]);
    }
    for(int i=0; i<m; i++){
      scanf("%d", &b[i]);
    }
    printf("Test %d:\n", res-t);
    for(int i=0; i<n; i++){
      if(i==k){
        for(int j=0; j<m; j++){
          printf("%d ",b[j]);
        }
      }
      printf("%d ",a[i]);
    }
    printf("\n");
  }
  
  return 0;
}