#include<stdio.h>

#define N 100004

int main(){
  int t;
  scanf("%d", &t);
  for(int u=1; u<=t; u++){
    int n,m;
    scanf("%d%d", &n, &m);
    printf("Test %d:\n",u);
    for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
        int x;scanf("%d",&x);
        if(i != 0 && j != 0){
          printf("%d ",x);
        }
      }
      printf("\n");
    }
  }
  return 0;
}