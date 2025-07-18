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
  int t;
  scanf("%d",&t);
  while (t--){
    char s[501],a[501];
    scanf("%s",s);
    int n=strlen(s);
    if(s[0] != '8' && s[n-1] != '8'){
      printf("NO\n");
      continue;
    }
    long sum=0;
    for(int i=n-1; i>=0; i--){
      sum+=s[i]-'0';
    }
    if(sum%10==0) printf("YES\n");
    else printf("NO\n");
  }
  
  return 0;
}