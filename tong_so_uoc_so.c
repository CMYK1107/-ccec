#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>
#include<assert.h>

#define N 100004
int sum(long n){
  int s=0;
  while(n){
    s += n % 10;
    n /= 10;
  }
  return s;
}
int main(){
  long n;
  int t;
  scanf("%d", &t);
  while(t--){
    int ans=0;
    scanf("%ld", &n);
    for(int i=1; i*i<=n; i++){
      if(n%i==0){
        if(sum(n/i)%3==0) {
          ans++;
        }
      }
    }
    printf("%d\n", ans);
  }
  return 0; 
}