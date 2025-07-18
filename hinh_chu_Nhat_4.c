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
  int d=n,d2=m;
  for(int i=n; i>=1; i--){
    if(n >= m) res=i,res2=2;
    else res=d2,res2=2;
    d--;
    d2--;
    for(int j=m; j>=1; j--){
      if(i>=m) printf("%d",res--);
      else{
        if(res >=1) printf("%d", res--);
        else printf("%d", res2++);
      }
    }
    
    printf("\n");
  }
  return 0;
}