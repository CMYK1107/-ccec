#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>
#include<assert.h>

#define N 100004
int check(char s[],int n){
  char x1[12],x2[12];
  int n1=0,n2=(n-2)/2-1;
  for(int i=1; i<=(n-2); i++){
    if(i<=(n-2)/2) x1[n1++]=s[i];
    else x2[n2--]=s[i];
  }

  x1[n1]='\0',x2[(n-2)/2]='\0';
  if(strcmp(x1,x2)==0) return 1;
  else return 0;

}
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    char s[20];
    scanf("%s",s);
    int n=strlen(s);
    if((s[n-1]-'0')/2==(s[0]-'0') || (s[0]-'0')/2==(s[n-1]-'0')){
      if(check(s,n));
        printf("YES\n");
    }else printf("NO\n");
  }
  return 0;
}