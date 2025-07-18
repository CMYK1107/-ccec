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
			if(i + 1 == a) printf("%i ",A[b-1][j]);
			else if(i + 1 == b) printf("%i ",A[a-1][j]);
			else printf("%i ",A[i][j]);
		}
		printf("\n");
	}
	return 0;
}

