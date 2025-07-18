#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>
#include<assert.h>

#define N 40
int p[N]={0};
bool f=true;
void sang(){
  p[0]=0;
  p[1]=1;
  for(int i=2; i<N; i++){
    p[i]=p[i-1]+p[i-2];
  }
}
int main(){
  sang();
  int n;
  scanf("%d",&n);
  for(int i=0; i<n; i++){
    printf("%d ",p[i]);
  }
  return 0;
}