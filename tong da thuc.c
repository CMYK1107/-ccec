#include <stdio.h>
#include <string.h>
#include <ctype.h>
void solve(char s[], int a[]) {
    int n = strlen(s);
    int i = 0;
    while (i < n) {
        if (s[i] > '9' || s[i] < '0') {
            i++;
            continue;
        }
        int d = 0, x = 0;
        while (i < n && s[i] >= '0' && s[i] <= '9') {
            d = d * 10 + (s[i] - '0');
            i++;
        }
        while (i < n && (s[i] < '0' || s[i] > '9')) i++;
        while (i < n && s[i] >= '0' && s[i] <= '9') {
            x = x * 10 + (s[i] - '0');
            i++;
        }
        a[x] += d;
    }
}

int main() {
    int n;
    scanf("%d\n", &n);
    while (n--) {
        int ok = 1, q[10005]={0};
        char s1[10000], s2[10000];
        scanf("%[^\n]\n", s1);
        scanf("%[^\n]\n", s2); 
        solve(s1, q);
        solve(s2, q);
        
        for (int i = 10005; i >= 0; i--) {
            if (q[i]!=0) {
            	if(!ok)
                    printf(" + ");
                printf("%d*x^%d", q[i], i);
                ok=0;
            }
       }
        printf("\n");
    }
    return 0;
}
