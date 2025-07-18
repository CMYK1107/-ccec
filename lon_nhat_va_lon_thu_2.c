#include<stdio.h>
int main(){
  int n,max=0,max2=1e9;
  scanf("%d",&n);
  int a[n];
  for(int i=0; i<n; i++){
    scanf("%d",&a[i]);
    if(max < a[i]) max=a[i];
  }
  for(int i=0; i<n; i++){
    if(max-a[i] !=0 && max-a[i] <= max2) max2=max-a[i];
  }
  printf("%d %d",max, max-max2);
  return 0;
}