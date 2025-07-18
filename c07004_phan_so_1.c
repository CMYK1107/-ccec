#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>
#include<assert.h>

#define int unsigned long long

int main(){
  int a,b;
  scanf("%llu %llu", &a, &b);
  int gcd = 1;
  int m =a,n=b;
  while(m != 0){
    int r = n % m;
    n = m;
    m = r;
  }
  gcd=n;
  printf("%llu/%llu", a/gcd, b/gcd);
  return 0;
}