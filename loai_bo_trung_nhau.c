#include<stdio.h>
#define N 100006
int a[N]={0};
int main(){
  int n;
  scanf("%d",&n);
  for(int i=0; i<n; i++){
    int x;
    scanf("%d",&x);
    if(!a[x]){
      printf("%d ",x);
      a[x]++;
    }
  }
  return 0;
}