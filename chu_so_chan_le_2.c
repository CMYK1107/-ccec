#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#define N 100004

int main(){
  int t;
  scanf("%d", &t);
  getchar();
  while(t--){
    char s[10];
    int deml=0, demc=0;
    scanf("%s",s);
    int l=strlen(s);
    for(int i=0; i<l; i++){
      if((s[i]-'0')%2==0){
        demc++;
      }else deml++;
    }
    printf("%d %d\n", deml, demc);
  }
  
  return 0;
}