#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#define N 100004

int main(){
  int n,m,k;
  scanf("%d %d", &n, &m);
  int a[n], b[m];
  for(int i=0; i<n; i++){
    scanf("%d", &a[i]);
  }
  for(int i=0; i<m; i++){
    scanf("%d", &b[i]);
  }
  scanf("%d", &k);
  for(int i=0;i<k;i++) printf("%d ",a[i]);
	for(int i=0;i<m;i++) printf("%d ",b[i]);
	for(int i=k;i<n;i++) printf("%d ",a[i]);
  return 0;
}