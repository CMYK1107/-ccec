#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
int main(){
  int n;
  scanf("%d", &n);
  char a[n+2];
  if(n==0){
    printf("0\n");
    return 0;
  }
  int k=0;
  while(n){
    a[k]=n%2+'0';
    n/=2;
    k++;
  }
  a[k]='\0';
  for(int i=k-1;i>=0;i--)
    printf("%c", a[i]);
  return 0;
}