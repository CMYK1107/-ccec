#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define N 100004
void swap(int *a, int *b){
  int tmp = *a;
  *a = *b;
  *b = tmp;
}
int space(int a[],int l,int r,int cmp){
  int i=l-1;
  int qi=a[r];
  for(int j=l; j<r; j++){
    if((cmp == 84 && a[j] < qi )|| (cmp==71 && a[j]>qi)){
      i++;
      swap(&a[j],&a[i]);
    }
  }
  swap(&a[i+1],&a[r]);
  return i+1;
}
void sort(int a[],int l,int r,int cmp){
  if(l<=r){
    int qi=space(a,l,r,cmp);
    sort(a,l,qi-1,cmp);
    sort(a,qi+1,r,cmp);
  }
}
//T:84 G:71
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    int n,m;
    char s[2];
    scanf("%d%d%s",&n,&m,&s);
    int a[n],b[m],c[n+m];
    if(s[0]=='T'||s[0]=='G'){
      for(int i=0; i<n+m; i++) scanf("%d",&c[i]);
      sort(c,0,n+m-1,s[0]);
      for(int i=0; i<n+m; i++){
      printf("%d ",c[i]);
     }
    }
    else{
      for(int i=0; i<n; i++) scanf("%d",&a[i]);
      for(int i=0; i<m; i++) scanf("%d",&b[i]);
      if(s[0]=='F'){
        for(int i=0; i<n; i++) printf("%d ",a[i]);
        for(int i=0; i<m; i++) printf("%d ",b[i]);
      }
      else if(s[0]=='A'){
        for(int i=0; i<m; i++) printf("%d ",b[i]);
        for(int i=0; i<n; i++) printf("%d ",a[i]);
      }
    }
    printf("\n");
  }
  return 0;
}