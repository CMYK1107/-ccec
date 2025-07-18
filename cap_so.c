#include<stdio.h>
#define N 100004
int gcd(int a, int b){
  if(b == 0) return a;
  return gcd(b, a % b);
}
int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n,m,a,b;
    scanf("%d%d%d%d",&n,&m,&a,&b);
    if(gcd(n,m) == gcd (a,b))
      printf("YES\n");
    else{
      printf("NO\n");
    }   
  }

  return 0;
}