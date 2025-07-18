#include <stdio.h>
#define ull unsigned long long

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        ull a;
        scanf("%llu", &a);
        if (a % 2 != 0) {
            printf("NO\n");
            continue;
        }
        int c = 0, l = 0;
        while (a > 0) {
            int tmp = a % 10;
            if (tmp % 2 == 0) c++;
            else l++;
            a /= 10;
        }
        if (c > l) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}