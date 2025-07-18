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
  int n;
  scanf("%d", &n);
  for(int i=1; i<=n; i++){
    if(check(i)){
      printf("%d ",i);
    }
  }
  return 0;
}
