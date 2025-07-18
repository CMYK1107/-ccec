#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>
#include<assert.h>

#define N 100004

int main(){
  int n;
  scanf("%d",&n);
  int a[n]={0};
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