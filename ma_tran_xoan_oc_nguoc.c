#include <stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  int T=t;
  while(t--){
    printf("Test %d:\n",T-t);
    int n;
    scanf("%i",&n);
    int a[n][n];
    int res=n*n;
    int l=0,r=n-1,top=0,bot=n-1;
    while(l <= r && top <= bot){
      for(int i=l; i<=r; i++){
        a[top][i]=res--;
      }
      top++;
      for(int i=top; i<=bot; i++){
        a[i][r]=res--;
      }
      r--;
      if(top <= bot){
        for(int i=r; i>=l; i--){
          a[bot][i]=res--;
        }
        bot--;
      }
      if(l <= r){
        for(int i=bot; i>=top; i--){
          a[i][l]=res--;
        }
        l++;
      }
    }
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        printf("%i ",a[i][j]);
      }
      printf("\n");
    }
  }
	return 0;
}

