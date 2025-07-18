#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%i", &n);
    getchar(); 
    while (n--) {
        char a[1000][80];
        int t = 0;
        while (scanf("%s", a[t]) != -1) {
        	int l=strlen(a[t]);
        	for(int i=0; i<l; i++){
        		if(a[t][i] >='A' && a[t][i] <= 'Z'){
        			a[t][i]+=32;
				}
			}
			a[t][0]-=32;
            t++;
            if (getchar() == '\n') break; 
        }
        for (int i = 0; i < t; i++) {
            printf("%s ", a[i]);
        }

        printf("\n");
    }

    return 0;
}
