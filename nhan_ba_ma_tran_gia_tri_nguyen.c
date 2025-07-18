#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

void nhapMaTran(int a[][MAX_SIZE], int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
}

void nhanMaTran(int a[][MAX_SIZE], int b[][MAX_SIZE], int c[][MAX_SIZE], 
                int m, int n, int p) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            c[i][j] = 0;
            for(int k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}



int main() {
    int m, n, p, q;
    scanf("%d %d %d %d", &m, &n, &p, &q);
    

    int a[MAX_SIZE][MAX_SIZE], b[MAX_SIZE][MAX_SIZE], c[MAX_SIZE][MAX_SIZE];
    int d[MAX_SIZE][MAX_SIZE], e[MAX_SIZE][MAX_SIZE];
    nhapMaTran(a, m, n);
    nhapMaTran(b, n, p);
    nhapMaTran(c, p, q);
    nhanMaTran(a, b, d, m, n, p);
    nhanMaTran(d, c, e, m, p, q);
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < q; j++) {
            printf("%d ", e[i][j]);
        }
        printf("\n");
    }

    return 0;
}