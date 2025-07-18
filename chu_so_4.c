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
  int m=n,x=0,s=0;
  while(m){
    if(m%10 == 4) return 0;
    x=x*10+m%10;
    s+=m%10;
    m/=10;
  }
  if(x==n && s%10==0) return 1;
  return 0;
}
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    int n;
    scanf("%d",&n);
    for(int i=pow(10,n-1); i<pow(10,n); i++){
      if(check(i)) printf("%d ",i);
    }
    printf("\n");
  }
  return 0;
}