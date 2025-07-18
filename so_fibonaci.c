#include<stdio.h>
#define N 100
#define ull unsigned long long
ull f[N]={0};
ull fib(int n) {
    if (n <= 2) return 1;
    if (f[n] != 0) return f[n];
    f[n] = fib(n - 1) + fib(n - 2);
    return f[n];
}
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);o
        printf("%lld\n", fib(n));
    }
    return 0;
}