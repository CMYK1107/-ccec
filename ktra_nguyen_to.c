#include<stdio.h>
#define N 100
int check(int n){
  if(n<2) return 0;
  if(n==2 || n==3) return 1;
  if(n%2==0 || n%3==0) return 0;
  for(int i=5; i*i<=n; i+=6){
    if(n%i==0 || n%(i+2)==0) return 0;
  }
  return 1;
}
int main(){
  int a[N][N];
  int n,m;
  scanf("%d%d",&n,&m);
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      scanf("%d",&a[i][j]);
      if(check(a[i][j])) a[i][j]=1;
      else a[i][j]=0; 
    }
  }
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  return 0;
}