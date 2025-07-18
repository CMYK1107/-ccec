#include <stdio.h>
#include <string.h>
int check1(char a[]) {
    int l = strlen(a);
    for (int i = 6; i < l - 1; i++) {
        if (a[i + 1] == '.') {
            if (a[i] >= a[i + 2]) return 0;
            i += 2;
        }
        if (a[i] >= a[i + 1]) return 0;
    }
    return 1;
}

int check2(char a[]) {
    int l = strlen(a);
    for (int i = 6; i < l - 1; i++) {
        if (a[i + 1] == '.') {
            if (a[i] != a[i + 2]) return 0;
            i += 2;
        }
        if (a[i] != a[i + 1]) return 0;
    }
    return 1;
}

int check3(char a[]) {
    if (a[6] != a[7] || a[7] != a[8] ) return 0;
    if (a[10] != a[11]) return 0;
    return 1;
}
int check4(char a[]) {
    int l = strlen(a);
    for (int i = 6; i < l; i++) {
        if (a[i] == '.') continue;
        if (a[i] != '6' && a[i] != '8') return 0;
    }
    return 1;
}

int main() {
    int n;
    char a[15];
    scanf("%i", &n);
    getchar(); 
    while (n--) {
        gets(a);
        if (check1(a) || check2(a) || check3(a) || check4(a)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
