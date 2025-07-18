#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>
#include<assert.h>

#define N 10004

int main(){
    char s[N][100];
    int maxd=0,n=0;
    while(scanf("%s", s[n]) != -1){
        int len=strlen(s[n]);
        if(len > maxd) {
            maxd = strlen(s[n]);
        }
        n++;
    }
    for(int i=0; i<n; i++){
        if(strlen(s[i]) ==  maxd){
            int tmp = 1;
            for(int j=i+1; j<n; j++){
                if(!strcmp(s[i],s[j])){
                    s[j][0]=0;
                    tmp++;
                }
            }
            printf("%s %d %d\n",s[i], maxd, tmp);
        }
        
    }
  return 0;
}