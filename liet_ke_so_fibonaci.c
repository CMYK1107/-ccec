#include<stdio.h>
#define N 100004
#define ull unsigned long long
ull f[93];
int main(){
  f[0]=1,f[1]=1;
  for(int i=2; i<93; i++){
    f[i]=f[i-1]+f[i-2];
  }
  int t;
  scanf("%d",&t);
  while(t--){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=n-1; i<m; i++){
      printf("%llu ",f[i]);
    }
    printf("\n");
  }
  return 0;
}