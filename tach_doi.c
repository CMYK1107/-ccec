#include<stdio.h>
#include<math.h>
#define ull long long
ull gcd(long a,long b){
  if(b==0) return a;
  return gcd(b,a%b);
}
ull lcm(long a,long b){
  return (a*b)/gcd(a,b);
}
void check(long n){
  ull m = n / 10, x = n % 10, x2, x1;
  ull res = 10;
  while (m) {
    x = x + (m % 10) * res;
    res *= 10;
    m /= 10;
  }
  if((int)log10(res)%2!=0){
    printf("INVALID\n");
    return;
  }
  ull half_res = pow(10,(int)log10(res) / 2);
  x2 = x % half_res;
  x1 = x / half_res;
  printf("%lld\n", lcm(x1,x2));
}
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    long n;
    scanf("%ld",&n);
    check(n);
  }
  return 0;
}