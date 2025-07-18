#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#define N 100004
int check(int n){
  if(n<2) return 0;
  if(n==2 || n==3) return 1;
  if(n%2==0 || n%3==0) return 0;
  for(int i=5; i*i<=n; i+=6){
    if(n%i==0 || n%(i+2)==0) return 0;
  }
  return 1;
}
int main(){
  int n,res=0;
  scanf("%d", &n);
  int a[n];
  for(int i=0; i<n; i++){
    scanf("%d", &a[i]);
    if(check(a[i])) res++;
  }
  printf("%d ", res);
  for(int i=0; i<n; i++){
    if(check(a[i])){
      printf("%d ", a[i]);
    }
  }
  
  return 0;
}