#include<stdio.h>
#define N 100004

int main(){
  double n;
  scanf("%lf",&n);
  double sum=0.0;
  for(int i=0; i<n; i++){
    double x;
    scanf("%lf",&x);
    sum+=x;
  }
  printf("%.3lf",sum/n);
  return 0;
} 