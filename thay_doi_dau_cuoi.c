#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#define N 100004

int main(){
  char s[10];
  scanf("%s", s);
  int l=strlen(s);
  char x=s[0];
  s[0]=s[l-1];
  s[l-1]=x;
  for(int i=(s[0]=='0'?1:0); i<l; i++)
    printf("%c", s[i]);
  return 0;
}