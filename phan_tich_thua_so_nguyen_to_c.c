#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>
#include<assert.h>

#define N 100004
void solve(){
  int n;
  scanf("%d",&n);
  int m=n;
  printf("%d = ",n);
  int ck=0;
  for(int i=2; i*i<=m; i++){
    int tmp=0;
    while(m%i==0){
      tmp++;
      m/=i;
    }
    if(tmp){
      if(ck) printf(" * ");
      printf("%d^%d", i, tmp);
      if(!ck) ck=1;
    }
  }
  if(m>1){
    if(ck) printf(" * ");
    printf("%d^1", m);
  }
}
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    solve();
    printf("\n");
  }
  return 0;
}