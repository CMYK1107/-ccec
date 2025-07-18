#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#define MAX 1 << 20 // 1MB buffer

int main() {
    char c[MAX];
    int max = 0, min = INT_MAX;
    while (fgets(c, MAX, stdin)) {
        char *it = strtok(c, " \n");
        while (it) {
            int num = atoi(it);
            if (num > max) max = num;
            if (num < min) min = num;
            it = strtok(NULL, " \n");
        }
    }
    printf("%d %d", max, min);
    return 0;
}
