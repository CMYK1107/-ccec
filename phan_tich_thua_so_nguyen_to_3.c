#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>
#include<assert.h>

#define N 100004
void solve(int ghgh){
  int n;
  scanf("%d",&n);
  int m=n;
  printf("Test %d: ",ghgh);
  for(int i = 2; i * i <= m; i++){
    int tmp = 0;
    while(m % i == 0){
      tmp++;
      m /= i;
    }
    if(tmp){
      printf("%d(%d) ", i, tmp);
    }
  }
  if(m > 1){
    printf("%d(1) ", m);
  }
}
int main(){
  int t;
  scanf("%d",&t);
  int m=t;
  while(t--){

    solve(m-t);
    printf("\n");
  }
  return 0;
}