#include <stdio.h>

int main(){
	int n,m;
	scanf("%i",&n);
	int a[n][n];
	for(int i=0; i<n; i++)
		for(int j=0; j<n; j++)
			scanf("%i",&a[i][j]);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i == j || i == n-j-1) printf("%i ",a[i][n-j-1]);
			else printf("%i ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

