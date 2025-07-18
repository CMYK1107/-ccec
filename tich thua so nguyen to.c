#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#define N 1000000 
int p[N+1] = {0};  
int f[N/10];       
int resnt = 0; 
void sang() {
    for (int i = 2; i*i <= N; i++) {
        if (p[i] == 0) {
            for (int j = i*i; j <= N; j += i) {
                p[j] = 1;
            }
        }
    }
    resnt = 0;
    for (int i = 2; i <= N; i++) {
        if (p[i] == 0) {
            f[resnt++] = i;
        }
    }
}
int main() {
    sang();    
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        if (n == 1) {
            printf("1\n");
            continue;
        } 
        int tick = 1;
        for (int k = 0; k < resnt && f[k]*f[k] <= n; k++) {
            if (n % f[k] == 0) {
                tick *= f[k];
                while (n % f[k] == 0) {
                    n /= f[k];
                }
            }
        }
        if (n > 1) {
            tick *= n;
        }
        printf("%d\n", tick);
    }
    return 0;
}