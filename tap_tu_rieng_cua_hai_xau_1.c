#include <stdio.h>
#include <string.h>
void inp(char s[200][200], int *n) {
    *n = 0; 
    while (scanf("%s", s[*n]) != -1) {
        (*n)++;
        if (getchar() == '\n') break; 
    }
    s[*n][0]=0;
}

int main() {
    int t1 = 0, t2 = 0;
    char s1[200][200], s2[200][200];
    inp(s1, &t1);
    inp(s2, &t2);
    for (int i = 0; i <= t1 ; i++) {
        for (int j = i + 1; j <= t1; j++) {
            if (strcmp(s1[i], s1[j]) == 0) {
                s1[j][0] = 0;
            }
        }
    }
    for (int i = 0; i <= t1 ; i++) {
        for (int j = i + 1; j <= t1; j++) {
            if (strcmp(s1[i], s1[j]) > 0) {
                char x[200];
                strcpy(x, s1[i]);
                strcpy(s1[i], s1[j]);
                strcpy(s1[j], x);
            }
        }
    }
    for (int i = 0; i <= t1; i++) {
        int x = 1; 
        for (int j = 0; j <= t2; j++) {
            if (strcmp(s1[i], s2[j]) == 0) {
                x = 0; 
                break;
            }
        }
        if (x) {
            printf("%s ", s1[i]); 
        }
    }

    return 0;
}
