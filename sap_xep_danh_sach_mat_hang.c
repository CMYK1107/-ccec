#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char ten_mat_hang[50], nhom_hang[50];
    double gia_mua, gia_ban;
    int ma;
    double lai;
} Shop;

int cmp(const void *a, const void *b) {
    Shop *A = (Shop *)a;
    Shop *B = (Shop *)b;
    if (A->lai > B->lai) return -1;
    else if (A->lai < B->lai) return 1;
    else return 0;
}

void inp(Shop shop[], int n) {
    for (int i = 0; i < n; i++) {
        shop[i].ma = i + 1;
        scanf("\n%[^\n]", shop[i].ten_mat_hang);
        scanf("\n%[^\n]", shop[i].nhom_hang);
        scanf("%lf %lf", &shop[i].gia_mua, &shop[i].gia_ban);
        shop[i].lai = shop[i].gia_ban - shop[i].gia_mua;
    }
}

void out(Shop shop[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d %s %s %.2lf\n", shop[i].ma, shop[i].ten_mat_hang, shop[i].nhom_hang, shop[i].lai);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    Shop shop[n];
    inp(shop, n);
    qsort(shop, n, sizeof(Shop), cmp);
    out(shop, n);
    return 0;
}
