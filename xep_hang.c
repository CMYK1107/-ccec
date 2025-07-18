#include <stdio.h>
#include <stdlib.h>

#define N 100006

typedef struct {
    int first, second;
} Pair;

int cmp(const void *a, const void *b) {
    Pair *A = (Pair *)a;
    Pair *B = (Pair *)b;
    return (A->first - B->first); 
}

int main() {
    int n;
    scanf("%i", &n);

    Pair pair[n];
    for (int i = 0; i < n; i++) {
        scanf("%i%i", &pair[i].first, &pair[i].second);
    }

    qsort(pair, n, sizeof(Pair), cmp);  
	int t=pair[0].first+pair[0].second;;
    for (int i = 1; i < n; i++) {
        if(pair[i].first >= t){
        	t=pair[i].first+pair[i].second;
		}
		else{
			t+=pair[i].second;
		}
    }
	printf("%i",t);
    return 0;
}
