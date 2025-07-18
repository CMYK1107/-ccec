#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define N 2000006

bool p[N];
int f[N];

void sang() {
    for (int i = 2; i <= sqrt(N); i++) {
        if (!p[i]) {
            for (int j = i * i; j <= N; j += i) {
                if (!p[j])
                    p[j] = true;
                f[j] = i;
            }
        }
    }
    for (int i = 2; i <= N; i++) {
        if (!p[i]) {
            f[i] = i;
        }
    }
}

int sum(int n) {
    int s = 0;
    while (n != 1) {
        s += f[n];
        n /= f[n];
    }
    return s;
}

int main() {
    sang();
    int t;
    long long ans = 0;
    scanf("%d", &t);
    while (t--) {
        int x;
        scanf("%d", &x);
        ans += sum(x);
    }
    printf("%lld", ans);
    return 0;
}
