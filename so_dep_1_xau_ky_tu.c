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
    int ck=1;
    char s[501],a[501];
    scanf("%s",s);
    int n=strlen(s);
    for(int i=n-1; i>=0; i--){
      if((s[i]-'0' )%2==0){
        a[n-i-1]=s[i];
      }else{
        ck=0;
        break;
      }
    }
    for(int i=0; i<n; i++){
      if(a[i] != s[i]){
        ck=0;
        break;
      }
    }
    if(ck) printf("YES\n");
    else printf("NO\n");
  }
  
  return 0;
}