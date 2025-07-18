#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
int n,a[10];
void back_track(int k){

    if(k==n+1){
      for(int i=1; i<=n; i++)
        printf("%d",a[i]);
      printf(" ");
      return;
    }
    for(int i=a[k-1]; i<=9; i++){
      a[k]=i;
      back_track(k+1);
    }
}
int main(){
  int t;
  scanf("%d", &t);
  a[0]=1;
  while(t--){

    scanf("%d",&n);
    back_track(1);
    printf("\n");
  }
  return 0;
}