#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>
#include<assert.h>
#define ll long long
#define N 100004
int thuan_nghich(ll n){
  ll m=n;
  ll s=0,tmp=0,sum=0;
  while(n){
    tmp++;
    s=s*10+n%10;
    sum+=n%10;
    n/=10;
  }
  if(m==s && tmp%2 != 0 && sum % 2 !=0) return 1;
  else return 0;
}
int main(){
   int t;
   scanf("%d",&t);
   while(t--){
    ll n;
    scanf("%lld",&n);
    if(thuan_nghich(n)) printf("YES\n");
    else printf("NO\n");
   }
  return 0;
}
