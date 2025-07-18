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
  int n,m,d;
  scanf("%d %d", &n, &m);
  for(int i=1; i<=n; i++){
    d=0;
    for(int j=i; j<=m; j++){
      printf("%d", j);
      d++;
    }
    int k=m-d,z=k;
    for(int j=1; j<=(m-d); j++){
      if(i>m){
        if(j==1) printf("%d",i);
      else printf("%d", k);
      k--;
      }else{
        printf("%d", z--);
      }
      
    }
    printf("\n");
  }
  return 0;
}