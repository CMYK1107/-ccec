#include<stdio.h>
#include<stdbool.h>

#define N 1004

int p[N] = {0}, f[32], b[N] = {0};

void sang() {
    p[0] = p[1] = 1;
    
    for(int i = 2; i < N; i++) {
        if(!p[i]) {
            for(int j = i*2; j < N; j += i) {
                p[j] = 1; 
            }
        }
    }
    f[0] = 0;
    f[1] = 1;
    b[0] = b[1] = 1;
    
    for(int i = 2; i < 32; i++) {
        f[i] = f[i-1] + f[i-2];
        if(f[i] < N) {
            b[f[i]] = 1;
        } else {
            break;
        }
    }
}

int sum(int n) {
    int s = 0;
    while(n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

void solve(int a, int c) {
    for(int i = a; i <= c; i++) {
        if(!p[i]) {
            int tmp = sum(i);
            if(b[tmp]) { 
                printf("%d ", i);
            }
        }
    }
}

int main() {
    sang();
    int a, b;
    scanf("%d %d", &a, &b);
    
    if(a > b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    
    solve(a, b);
    return 0;
}