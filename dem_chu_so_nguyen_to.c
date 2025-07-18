#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>
#include<assert.h>
int  a[10];
#define ll long long
int main(){
  char s[20];
  scanf("%s", s);
  int n = strlen(s);
  for(int i=0; i<n; i++){
    if(s[i] == '2' || s[i] == '3' || s[i] == '5' || s[i] == '7'){
      a[s[i]-'0']++;
    }
  }
  for(int i=0; i<n; i++){
    if(a[s[i]-'0']){
      printf("%c %d\n",s[i], a[s[i]-'0']);
      a[s[i]-'0']=0;
    }
  }
  return 0;
}