#include <stdio.h>
#define N 10005
int check(int n){
  if(n<2) return 0;
  if(n==2 || n==3) return 1;
  if(n%2==0 || n%3==0) return 0;
  for(int i=5; i*i<=n; i+=6){
    if(n%i==0 || n%(i+2)==0) return 0;
  }
  return 1;
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int k = 1; k <= t; k++)
    {
        int n;
        scanf("%d", &n);
        int a[n + 1], f[100005] = {};
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
            if(check(a[i])) f[a[i]]++;
        }
        printf("Test %d:\n", k);
        for (int i = 1; i <= N; i++)
        {
            if (f[i] != 0)
            {
                printf("%d xuat hien %d lan\n", i, f[i]);
                f[i] = 0;
            }
        }
    }
}