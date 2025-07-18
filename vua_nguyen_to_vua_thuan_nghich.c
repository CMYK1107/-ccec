#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>
#include<assert.h>

#define N 1000004
int check(int n){
  int m=n,tmp=0;
  while(m){
    tmp=tmp*10+m%10;
    m/=10;
  }
  if(n==tmp){
    return 1;
  }
  return 0;
}
int p[N]={0};
int f[N];
int sang(){
  p[0]=p[1]=1;
  for(int i=2;i*i<=N;i++){
    if(p[i]==0){
      for(int j=i*i;j<=N;j+=i){
        p[j]=1;
      }
    }
  }
  int k=0;
  for(int i=10; i<=N; i++){
    if(p[i]==0 && check(i)){
      f[k++]=i;
    }
  }
}
int main(){
  sang();
  int t;
  scanf("%d",&t);
  while(t--){
    int n,m;
    scanf("%d%d",&n,&m);
    int tmp=0;
    for(int i=0;i<109;i++){
      if(f[i]>=n && f[i]<=m){
        printf("%d ",f[i]);
        tmp++;
      }
      if(tmp==10){
        printf("\n");
        tmp=0;
      }
      
    }
    printf("\n\n");
  }
  return 0;
}