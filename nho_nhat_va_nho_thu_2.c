#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#define N 100004

int main(){
  int n,min=1e9,min2=1e9;
  int a[N];
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    scanf("%d", &a[i]);
    if(a[i]<min) min=a[i];
  }
  for(int i=0; i<n; i++){
    if(a[i]-min!=0)
      min2=fmin(min2,abs(a[i]-min));
  }
  printf("%d %d", min,min2+min);
  return 0;
}