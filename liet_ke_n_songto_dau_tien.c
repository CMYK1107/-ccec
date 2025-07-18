#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>
#include<assert.h>
#define ull unsigned long long
#define N 1000005
long long p[N]={0},ck[N];
int check(ull n){
  if(n<2) return 0;
  if(n==2 || n==3) return 1;
  if(n%2==0 || n%3==0) return 0;
  for(ull i=5; i*i<=n; i+=6){
    if(n%i==0 || n%(i+2)==0) return 0;
  }
  return 1;
}
int main(){
  int n;
  scanf("%d",&n);
  int s=0,i=2;
  while(s<n){
    if(check(i)){
      printf("%d\n",i);
      s++;
    }
    i++;
  }
  return 0;
}