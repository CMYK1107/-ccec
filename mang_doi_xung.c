#include<stdio.h>
int checK(int a[],int n){
  for(int i=1; i<=n; i++){
    if(a[i]!=a[n-i+1]){
      
      return 0;
    }
  }
  return 1;
}
int main(){
  int t;
  scanf("%d",&t);
  while (t--){
    int n;
    scanf("%d",&n);
    int a[n+1];
    for(int i=1; i<=n; i++){
      scanf("%d",&a[i]);
    }
    if(checK(a,n)) printf("YES\n");
    else printf("NO\n");  
  }
  

  return 0;
}