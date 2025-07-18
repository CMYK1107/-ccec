#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int t;
    scanf("%d\n", &t);
    
    while (t--) {
        char s[1000];
        fgets(s, sizeof(s), stdin);
        s[strcspn(s, "\n")] = '\0';
        char a[100][100];
        int n = 0, p = 0;
        for (int i = 0; s[i]; i++) {
            if (s[i] == ' ') {
                if (p != 0) { 
                    a[n][p] = '\0';
                    n++;
                    p = 0;
                }
            } else {
                a[n][p++] = tolower(s[i]); 
            }
        }
        if (p != 0) {
            a[n][p] = '\0';
            n++;
        }
        for (int i = 0; i < n; i++) {
            if (a[i][0]) a[i][0] = toupper(a[i][0]);
        }
        for (int i = 1; i < n; i++) {
            printf("%s", a[i]);
            if (i < n-1) printf(" ");
        }
				for(int i=0; i<strlen(a[0]); i++){
					if(a[0][i] >= 'a' && a[0][i] <= 'z'){
						a[0][i] -= 32;
					}
				}
        printf(", %s\n", a[0]);
    }
    
    return 0;
}