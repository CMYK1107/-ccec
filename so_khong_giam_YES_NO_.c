#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#define N 100004

int main(){
  int t;
  scanf("%d", &t);
  while(t--){
    char s[N];
    scanf("%s", s);
    int n = strlen(s);
    for(int i=1; i<n; i++){
      if((s[i]-'0') < (s[i-1]-'0')){
        printf("NO\n");
        break;
      }
      if(i == n-1){
        printf("YES\n");
      }
    }
  }
  return 0;
}