#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int msv;
    char ten[100];
    double a, b, c;
} sinhvien;

sinhvien A[100];
int n = 0;

void add(int n) {
    int d = 1;
    while (d <= n) {
        A[d].msv = d;
        scanf("\n%[^\n]s",A[d].ten);
        scanf("%lf %lf %lf", &A[d].a, &A[d].b, &A[d].c);
        d++;
    }
}

void lua_chon_2(int d) {
    scanf("\n%[^\n]s",A[d].ten);
    scanf("%lf %lf %lf", &A[d].a, &A[d].b, &A[d].c);
}

void in(int d) {
    for (int i = d; i > 0; i--) {
        printf("%d %s %.1lf %.1lf %.1lf\n", A[i].msv, A[i].ten, A[i].a, A[i].b, A[i].c);
    }
}

int main() {
    while (1) {
        int x;
        scanf("%d", &x);
        if (x == 1) {
            scanf("%d\n", &n);
            add(n);
            printf("%d\n",n);
        } else if (x == 2) {
            int m;
            scanf("%d\n", &m);
            lua_chon_2(m);
            printf("%d\n",m);
        } else {
            in(n);
            return 0;
        }
    }
    return 0;
}
