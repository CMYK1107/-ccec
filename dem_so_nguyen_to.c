#include<stdio.h>

#define N 100004
int p[N]={0};
void sang(){
  p[0]=p[1]=1;
  for(int i=2;i*i<=N;i++){
    if(p[i]==0){
      for(int j=i*i;j<=N;j+=i){
        p[j]=1;
      }
    }
  }
}
int sum(int n){
  while(n){
    if(p[n%10]){
      return 0;
    }
    n/=10;
  }
  return 1;
}
int main(){
  sang();
  int t;
  scanf("%d", &t);
  while(t--){
    int n,m,ans=0;
    scanf("%d%d",&n,&m);
    for(int i=n; i<=m; i++){
      if(!p[i] && sum(i)){
        ans++;
      }
    }
    printf("%d\n", ans);
  }
  return 0;
}