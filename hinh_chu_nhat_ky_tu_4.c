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
  int n,m;
  scanf("%d %d",&n,&m);
  int ans=m,tmp=0,tm=0,pas=0;
  for (int i=0; i<n; i++){
    if(i < n-m){
      for(int j=0; j<m; j++){
        printf("%c",64+m);
      }
    }
    else{
      if(n-m<0) pas=abs(n-m);
      for(int j=0; j<m-ans+pas; j++){
      printf("%c",64+j+m-tmp -pas);
      }
    for(int j=0+pas; j<m-tmp; j++){
      printf("%c", 64+m);
    }
    ans--;
    tmp++;
    }
    

    printf("\n");
  }
  return 0;
}