#include<stdio.h>
int check(int n){
  if(n<2) return 0;
  if(n==2 || n==3 ) return 1;
  if(n%2==0 || n%3==0) return 0;
  for(int i=5; i*i<n; i+=6){
    if(n%i==0 || n%(i+2)==0) return 0;
  } 
  return 1;
}
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
      int x;
      scanf("%d",&x);
      if(check(x)) printf("%d ",x);
    }
    printf("\n");
  }
  return 0;
}