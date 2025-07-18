#include <stdio.h>
#include <math.h>

int check[1000006] = {0}; 
void sang() {
    check[0] = check[1] = 1; 
    for (int i = 2; i <= 1000; i++) { 
        if (!check[i]) {
            for (int j = i * i; j < 1000006; j += i) {
                check[j] = 1; 
            }
        }
    }
}

int main() {
    sang(); 
    int n, sum = 0;
    scanf("%i", &n);
    int a[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%i", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (!check[a[i][j]]) {
                sum += a[i][j];
            }
        }
	}
    printf("%i", sum);
    return 0;
}
