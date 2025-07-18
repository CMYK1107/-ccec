#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>
#include<assert.h>

#define N 100004
int check(int n){
  int ans=-1;
  while(n){
    int tmp=n%10;
    if(tmp > ans){
      ans = tmp;
    }else return 0;
    n/=10;
  }
  return 1;
}
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    int n,m,ans=0;
    scanf("%d%d",&n,&m);
    for(int i=n; i<=m; i++){
      if(check(i)){
        ans++;
      }
    }
    printf("%d\n",ans);
  }
  return 0;
}