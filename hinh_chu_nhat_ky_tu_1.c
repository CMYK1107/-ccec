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
  int n,m,res=0,tmp=0;
  scanf("%d %d",&n,&m);
  int max=fmax(n,m);
  for(int i=1; i<=n; i++){
    res=97+max-1;
    for(int j=1; j<=m; j++){
      printf("%c",res);
      if(j<i) res--;
    }
    printf("\n");
    
  }
  return 0;
}