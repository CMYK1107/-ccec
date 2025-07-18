#include<stdio.h>
#include<string.h>
int main(){
  int t;
  scanf("%d\n",&t);
  while(t--){
    char s[200];
    gets(s);
    int ans=0;
    int n=strlen(s);
    s[n]=' ';
    for(int i=0; i<=n; i++){
      if(s[i]!=' ' && s[i+1] == ' ') ans++;
    }
    printf("%d\n",ans);
  }
  return 0;
}