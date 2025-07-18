#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#define N 100004

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
      scanf("%d", &a[i]);
    }
    int min=0,ans=0;
    for(int i=0; i<n; i++){
      if(a[i]>min){
        ans++;
        min=a[i];
      }
    }
     printf("%d\n", ans);
  }
 

  return 0;
}