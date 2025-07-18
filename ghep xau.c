#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool cmp( char a[], char b[]){
	char c[100],d[100];
	strcpy(c,a);
	strcpy(d,b);
	strcat(c,d);
	strcat(d,a);
	if(strcmp(c,d)>0) return true;
	return false;
}
void swap(char a[], char b[]) {
    char temp[100]; 
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
    	scanf("%d", &n);
    	char a[n][100];
   		for (int i = 0; i < n; i++) {
    	    scanf("%s", a[i]); 
   		}
    	for (int i = 0; i < n; i++) {
    	    for (int j = i + 1; j < n; j++) {
        	    if (cmp(a[i],a[j])) {
            	    swap(a[i], a[j]);
    	        }
        	}
    	}
    	for (int i = 0; i < n; i++) {
        	printf("%s", a[i]); 
    	}
    	printf("\n");
	}
    return 0;
}

