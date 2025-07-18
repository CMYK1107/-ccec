#include <stdio.h>
#include <string.h>

void add0(char a[1000], char b[1000]) {
    int l1 = strlen(a);
    int l2 = strlen(b);

    while (l1 > l2) {
        for (int i = l2; i >= 0; i--) {
            b[i + 1] = b[i];
        }
        b[0] = '0'; 
        l2++;    
    }
}
void hieu(char a[1000], char b[1000], char c[1001]) {
    int l1=strlen(a);
    int res = 0; 
    for (int i = l1 - 1; i >= 0; i--) {
        int ansB = b[i] - '0';
        int ansA = a[i] - '0';

        int ans = ansA - ansB - res;
        if (ans < 0) {
            ans += 10;
            res = 1;
        } else {
            res = 0;
        }

        c[i] = ans + '0'; 
    }
    c[l1] = '\0'; 
    int i = 0, k = 0;
    while (c[i] == '0' && i < l1) {
        i++;
    }
    if (i == l1) {
        c[0] = '0';
        c[1] = '\0';
    } else {
        while (i < l1) {
            c[k++] = c[i++];
        }
        c[k] = '\0';
    }
}

int main() {
    int n;
    scanf("%i", &n);
    while (n--) {
        char a[1000], b[1000], c[1001];
        scanf("%s", a);
        scanf("%s", b);
        if(strlen(a) > strlen(b))
			add0(a , b);
		else add0(b,a);
        if (strcmp(a, b) > 0 ) hieu(a, b, c);
        else {
            hieu(b, a, c);
        }

        printf("%s\n", c);
    }

    return 0;
}
