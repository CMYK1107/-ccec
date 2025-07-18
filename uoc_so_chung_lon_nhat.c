#include<stdio.h>
int main(){
  int t;
  scanf("%d", &t);
  int n,m;  
  while(t--){
    scanf("%d %d", &n, &m);
    while (n != 0)
    {
        int c = n;
        n = m % n;
        m = c;
    }
    printf("%d\n", m);
  }
}