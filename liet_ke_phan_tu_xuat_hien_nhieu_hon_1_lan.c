#include<stdio.h>
#define N 100004

int main(){
  int a[N]={0};
  int n;
  scanf("%d",&n);
  int b[n];
  for(int i=0; i<n; i++){
    scanf("%d",&b[i]);
    a[b[i]]++;
  }
  int dem=0;
  for(int i=0; i<n; i++){
    if(a[b[i]]>1) a[b[i]]=-1,dem++;
  }
  printf("%d\n",dem);
  for(int i=0; i<n; i++){
    if(a[b[i]]==-1) printf("%d ",b[i]),a[b[i]]=0;
  }
  return 0;
}