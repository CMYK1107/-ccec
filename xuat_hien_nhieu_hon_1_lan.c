#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#define N 100004

int main(){
  int n;
  int b[N]={0};
  scanf("%d", &n);
  int a[n];
  for(int i=0; i<n; i++){
    scanf("%d", &a[i]);
    b[a[i]]++;
  }
  int ck=0;
  for(int i=0; i<n; i++){
    if(b[a[i]]>1){
      printf("%d ", a[i]);
      b[a[i]]=0;
      ck=1;
    }
  }
  if(!ck) printf("0");
  return 0;
}