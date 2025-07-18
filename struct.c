#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

typedef struct {
    char ten[100];
    char lop[100];
    double gpa;
} sinhvien;

void input(sinhvien *x) {
    printf("Nhap ten: ");
    getchar(); // Xóa b? ð?m trý?c khi nh?p chu?i
    gets(x->ten);
    printf("Nhap lop: ");
    gets(x->lop);
    printf("Nhap GPA: ");
    scanf("%lf", &x->gpa);
}

void out(sinhvien x) {
    printf("%s %s %.2lf\n", x.ten, x.lop, x.gpa);
}

int cmp(const void *a, const void *b) {
    sinhvien *x = (sinhvien *)a;
    sinhvien *y = (sinhvien *)b;
    if (x->gpa > y->gpa) return -1; // S?p x?p gi?m d?n
}

int main() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    sinhvien a[n];

    for (int i = 0; i < n; i++) {
        input(&a[i]);
    }

    qsort(a, n, sizeof(sinhvien), cmp);

    printf("Sap xep theo GPA giam dan:\n");
    for (int i = 0; i < n; i++) {
        out(a[i]);
    }

    return 0;
}
