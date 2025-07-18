#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define max_N 1000
#define max_kt 1000

typedef struct {
    char kyTu[max_kt];
    double giaTri;
} Nut;
int check(Nut pair[],int n){
    for (int i = 1; i < n; i++) {
        if (pair[i].giaTri < pair[i-1].giaTri) return 0;
    }
    return 1;
}
void sapXepNut(Nut pair_nut[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (pair_nut[j].giaTri > pair_nut[j + 1].giaTri) {
                Nut temp = pair_nut[j];
                pair_nut[j] = pair_nut[j + 1];
                pair_nut[j + 1] = temp;
            }
        }
    }
}

void inp(Nut pair_nut[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s", pair_nut[i].kyTu);
        if (i < n - 1) printf(" ");
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("%.3f", pair_nut[i].giaTri);
        if (i < n - 1) printf(" ");
    }
    printf("\n");
}
int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int M;
        scanf("%d", &M);
        
        Nut pair_nut[max_N];
        for (int i = 0; i < M; i++) {
            scanf("%s", pair_nut[i].kyTu);
        }
        for (int i = 0; i < M; i++) {
            scanf("%lf", &pair_nut[i].giaTri);
        }
        sapXepNut(pair_nut, M);
        inp(pair_nut, M);
        int N = M;
        double tong=0;
        while (N > 1) {
            Nut nutMoi;
            strcpy(nutMoi.kyTu, pair_nut[0].kyTu);
            strcat(nutMoi.kyTu, pair_nut[1].kyTu);
            nutMoi.giaTri= pair_nut[0].giaTri + pair_nut[1].giaTri;
            
            for (int i = 2; i < N; i++) {
                pair_nut[i - 1] = pair_nut[i];
            }
            pair_nut[0] = nutMoi;
            N--;
            if(check(pair_nut,N)==0) {
                inp(pair_nut, N);
                sapXepNut(pair_nut, N);
            }
            inp(pair_nut, N);
        }
    }
    
    return 0;
}