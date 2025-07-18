#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#define N 100004
int giai_thua(int n){
  if(n==0 || n==1) return 1;
  return n*giai_thua(n-1);
}
int check(int n){
  int sum=0,m=n;
  while(n){
    sum+=giai_thua(n%10);
    n/=10;
  }
  if(sum!=m) return 0;
  return 1;
} 
int main(){
  int n,m;
  scanf("%d%d", &n, &m);
  if(n>m){
    int tmp = n;
    n = m;
    m = tmp;
  }
  for(int i=n; i<=m; i++){
    if(check(i)){
      printf("%d ",i);
    }
  }
  return 0;
}
