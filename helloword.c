#include <stdio.h>
#include <string.h>

#define MAX 100
#define MAX_ft_LEN 100

typedef struct {
    char ft[100];
    double sc;
} pair;

void sortpairs(pair pairs[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (pairs[j].sc > pairs[j + 1].sc) {
                pair temp = pairs[j];
                pairs[j] = pairs[j + 1];
                pairs[j + 1] = temp;
            }
        }
    }
}

void printTrace(pair pairs[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%s", pairs[i].ft);
        if (i < size - 1) {
            printf(" ");
        }
    }
    printf("\n");
    for (int i = 0; i < size; i++) {
        printf("%.3f", pairs[i].sc);
        if (i < size - 1) {
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int M;
        scanf("%d", &M);
        
        pair pairs[MAX];
        for (int i = 0; i < M; i++) {
            scanf("%s", pairs[i].ft);
        }
        for (int i = 0; i < M; i++) {
            scanf("%lf", &pairs[i].sc);
        }
        sortpairs(pairs, M);
        printTrace(pairs, M);
        
        int d = M;
        while (d > 1) {
            pair newpair;
            strcpy(newpair.ft, pairs[0].ft);
            strcat(newpair.ft, pairs[1].ft);
            newpair.sc = pairs[0].sc + pairs[1].sc;
            pair newpairs[MAX];
            newpairs[0] = newpair;
            for (int i = 2; i < d; i++) {
                newpairs[i - 1] = pairs[i];
            }
            for (int i = 0; i < d - 1; i++) {
                pairs[i] = newpairs[i];
            }
            d--;
            sortpairs(pairs, d);
            printTrace(pairs, d);
        }
    }
    
    return 0;
}
