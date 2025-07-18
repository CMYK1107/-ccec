#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#define N 100004
int main(){
  int a,b;
  scanf("%d%d", &a,&b);
  int A[4]={1,2,145,40585};
  for(int i=0; i<4; i++){
    if(A[i]>=a && A[i]<=b){
      printf("%d ",A[i]);
    }
  }
  return 0;
}
