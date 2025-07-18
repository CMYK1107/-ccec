#include<stdio.h>
#define N 100004
int a[N]={0};
int main(){
  int n;
  scanf("%d",&n);
  
  for(int i=1; i<n; i++){
    int n,m;
    scanf("%d %d",&n,&m);
    a[n]++;
    a[m]++;
  }
  for(int i=1; i<=n; i++){
    if(a[i]==n-1){
      printf("Yes");
      return 0;
    }
  }
  printf("No");
  return 0;
}