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
ll gcd(ll a, ll b){
  if(b == 0) return a;
  return gcd(b, a % b);
}
ll lcm(ll a, ll b){
  return (a * b) / gcd(a, b);
}
int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    ll a, b;
    scanf("%lld%lld", &a, &b);
    ll m = lcm(a, b);
    ll n = gcd(a, b);
    printf("%lld %lld\n", m, n);
  }
  return 0;
}