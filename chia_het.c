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
  int n,k,ans=0;
  scanf("%d %d",&n,&k);
  for(int i=2; i<=n; i++){
    int m=i;
    while(m%2==0){
      ans++;
      if(ans==k){
        printf("Yes");
        return 0;
      }
      m/=2;
    }
  }
  printf("No");
  return 0;
}