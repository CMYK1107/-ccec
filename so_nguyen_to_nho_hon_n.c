#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>
#include<assert.h>

#define N 1000005
int p[N]={0},ck[N];
void sang(){
  p[0]=p[1]=1;
  for(int i=2; i*i<=N; i++){
    if(!p[i]){
      for(int j=i*i; j<=N; j+=i){
        p[j]=1;
      }
    }
  }
  int k=0;
  for(int i=0; i<=N; i++){
    if(!p[i]){
      ck[k++]=i;
    }
  }
}
int main(){
  sang();
  int n;
  scanf("%d",&n);
  int k=0;
  while(ck[k]<n){
    printf("%d\n",ck[k++]);
  }
  return 0;
}