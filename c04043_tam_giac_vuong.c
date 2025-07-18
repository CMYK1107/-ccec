#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>
#include<assert.h>
int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    int n;
    scanf("%d", &n);
    long long a[n];
    for(int i=0; i<n; i++){
      scanf("%lld", &a[i]);
    }
    int ck=0;
    for(int i=0; i<n-2; i++){
      for(int j=i+1; j<n-1; j++){
        long long x=sqrt(a[i]*a[i] + a[j]*a[j]);
        if( x==sqrt(a[i]*a[i] + a[j]*a[j])){
          for(int k=j+1; k<n; k++){
            if(x*x == a[k]*a[k]){
              printf("YES\n");
              ck=1;
              break;
            }
          }
          if(ck) break;
        }
      }
      if(ck) break;
    }
    if(!ck) printf("NO\n");
  }
  
  return 0;
}