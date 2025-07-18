#include <stdio.h>

int main(){
	int a,b,n,m;
	scanf("%i%i",&n,&m);
	int A[n][m];
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			scanf("%i",&A[i][j]);
	scanf("%i%i",&a,&b);
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(j + 1 == a) printf("%i ",A[i][b-1]);
			else if(j + 1 == b) printf("%i ",A[i][a-1]);
			else printf("%i ",A[i][j]);
		}
		printf("\n");
	}
	return 0;
}

