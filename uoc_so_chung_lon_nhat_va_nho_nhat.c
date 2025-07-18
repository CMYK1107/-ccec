#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>
#include<assert.h>
long gcd(long a , long b){
  if(b==0) return a;
  return gcd(b, a%b);
}
long lcm(long a , long b){
  return (a*b)/gcd(a,b);
}
int main(){
  long n,m;
  scanf("%ld %ld", &n, &m);
  printf("%ld\n%ld",gcd(n,m),lcm(n,m));
  return 0;
}