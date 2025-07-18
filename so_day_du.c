#include <stdio.h>
#include <string.h>
char s[11]="0123456789";
int main() {
    int n;
    scanf("%i", &n);
    while (n--) {
        char a[1000];
        int b[10] = {0};
        scanf("%s", a);
        int l = strlen(a);
        int ck = 1;
        if(a[0]=='0'){
					printf("INVALID\n");
					continue;
				}
        for (int i = 0; i < l; i++) {
					
            if (a[i] >= '0' && a[i] <= '9') {
                b[a[i] - '0'] = 1;
            } else {
                printf("INVALID\n");
                ck = 0;
                break;
            }
        }
        
        if (ck) { 
            int sum = 0;
            for (int i = 0; i < 10; i++) {
							sum+= b[i];
            }
            if (sum == 10) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }
    
    return 0;
}