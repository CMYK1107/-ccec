#include<stdio.h>
int sum(int n){
  int s=0;
  while(n){
    s+=n%10;
    n/=10;
  }
  return s;
}
int main(){
  int n,m;
  scanf("%d%d", &n, &m);
  if(sum(n)>sum(m))
    printf("%d %d",m,n);
  else printf("%d %d",n,m);
  return 0;
}