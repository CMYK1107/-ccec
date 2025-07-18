#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct {
    int msv;
    char name[100];
    double a, b, c;
} sinhvien;

int n;
sinhvien A[1000];

void add(int n) {
    int d = 1;
    while (d <= n) {
        A[d].msv = d;
        scanf(" %[^\n]", A[d].name);
        scanf("%lf %lf %lf", &A[d].a, &A[d].b, &A[d].c); 
        d++;
    }
}

void newupdate(int d) {
    scanf( " %[^\n]", A[d].name); 
    scanf( "%lf %lf %lf", &A[d].a, &A[d].b, &A[d].c); 
}

void out(int d) {
    for (int i = 1; i <= d; i++) {
        if (A[i].a < A[i].b && A[i].b < A[i].c) {
            printf("%d %s %.1lf %.1lf %.1lf\n\n", A[i].msv, A[i].name, A[i].a, A[i].b, A[i].c);
        }
    }
}

int main() {
    while (1) {
        int x;
        scanf( "%d", &x); 
        if (x == 1) {
            scanf( "%d", &n); 
            add( n);
            printf("%d\n\n", n);
            
        } else if (x == 2) {
            int m;
            scanf( "%d", &m); 
            newupdate(m); 
            printf("%d\n\n", m);
        } else {
            out(n);
            break; 
        }
    }
    return 0;
}
