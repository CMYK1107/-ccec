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
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  int ans=fmin(a,fmin(b,c));
  printf("%d\n",ans);
  return 0;
}