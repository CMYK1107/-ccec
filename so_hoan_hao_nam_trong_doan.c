#include<stdio.h>
int main(){
  int a,b;
  scanf("%d%d",&a,&b);
  if(a > b){
    int tmp = a;
    a = b;
    b = tmp;
  }
  int A[4]={6,28,496,8128};
  for(int i=0; i<4; i++){
    if(A[i] >= a && A[i] <= b){
      printf("%d ",A[i]);
    }
  }
  return 0;
}