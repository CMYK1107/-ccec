#include<stdio.h>
#define N 1003

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int p[N] = {0}; // Mảng đếm tần suất
        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            int x;
            scanf("%d", &x);
            p[x]++;
        }
        for (int i = 0; i < N; i++) {
            if (p[i]) {
                // Kiểm tra số nguyên tố trực tiếp
                int is_prime = 1;
                if (i < 2) is_prime = 0;
                else if (i == 2 || i == 3) is_prime = 1;
                else if (i % 2 == 0 || i % 3 == 0) is_prime = 0;
                else {
                    for (int j = 5; j * j <= i; j += 6) {
                        if (i % j == 0 || i % (j + 2) == 0) {
                            is_prime = 0;
                            break;
                        }
                    }
                }
                if (is_prime) {
                    printf("%d ", i);
                }
            }
        }
        printf("\n");
    }
    return 0;
}