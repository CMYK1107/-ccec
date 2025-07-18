#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>
#include<assert.h>

#define N 100004
int p[N]={0};
int f[N];
void sang(){
  int k=0;
  for(int i=2; i*i<=N; i++){
    if(!p[i]){
      for(int j=i*i; j<=N; j+=i){
        p[j]=1;
      }
    }
  }
  for(int i=2; i<=N; i++){
    if(!p[i]) f[k++]=i;
  }
}
int main(){
  sang();
  int t;
  scanf("%d",&t);
  while(t--){
    int n;
    int k=0;
    scanf("%d",&n);
    while(f[k] <= n/2){
      if(!p[n-f[k]] && !p[f[k]]){
        printf("%d %d ",f[k],n-f[k]);
      }
      k++;
    }
    printf("\n");
  }
  return 0;
}