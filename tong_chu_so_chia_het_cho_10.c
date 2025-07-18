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
  int n;
  scanf("%d",&n);
  getchar();
  while(n--){
    char s[10];
    int sum=0;
    scanf("%s",s);
    int len = strlen(s);
    if(s[0]=='-') s[0]='0';
    for(int i=0; i<len; i++){
      sum+=s[i]-'0';
    }
    if(sum%10==0){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
  }
  return 0;
}