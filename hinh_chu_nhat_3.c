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
  int n,m,res,res2;
  scanf("%d %d", &n, &m);
  for(int i=1; i<=n; i++){
    res=i,res2=2;
    for(int j=1; j<=m; j++){
      if(i > m ) printf("%d", res--);
      else{
        if(res >=1) printf("%d", res--);
        else printf("%d", res2++);
      }
    }
    
    printf("\n");
  }
  return 0;
}