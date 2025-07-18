#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#define N 100004

int main(){
  char s[10];
  int deml=0, demc=0;
  gets(s);
  int l=strlen(s);
  for(int i=0; i<l; i++){
    if((s[i]-'0')%2==0){
      demc++;
    }else deml++;
  }
  printf("%d %d", deml, demc);
  return 0;
}