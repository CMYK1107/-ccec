#include<stdio.h>
void swap(int *a,int *b){
  int tmp=*a;
  *a=*b;
  *b=tmp;
}
int space(int a[],int l,int r){
  int qi=a[r];
  int i=l-1;
  for(int j=l; j<r; j++){
    if(a[j] < qi){
      i++;
      swap(&a[j],&a[i]);
    }
  }
  swap(&a[i+1],&a[r]);
  return i+1;
}
void sort(int a[],int l,int r){
  if(l<=r){
    int qi=space(a,l,r);
    sort(a,l,qi-1);
    sort(a,qi+1,r);
  }
}
int main(){
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0; i<n; i++) scanf("%d",&a[i]);
  sort(a,0,n-1);
  for(int i=0; i<n; i++) printf("%d ",a[i]);
  return 0;
}