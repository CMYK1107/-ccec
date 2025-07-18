#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#define N 100004
int main(){
  char s[N];
  gets(s);
  int n=strlen(s);
  int demchu=0,kytukhac=0,so=0;
  for(int i=0; i<n; i++){
    if((s[i]>='A' && s[i]<='Z' )|| (s[i]>='a' && s[i]<='z')){
        demchu++;
    }
    else if(s[i]>='0' && s[i]<='9') so++;
    else kytukhac++;
  }
  printf("%d %d %d",demchu,so,kytukhac);
  return 0;
}