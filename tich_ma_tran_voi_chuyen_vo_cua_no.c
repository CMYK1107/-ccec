#include <stdio.h>

int main(){
	int t;
	scanf("%i",&t);
	for(int h=1; h<=t; h++){
		int n,m;
		scanf("%i%i",&n,&m);
		int a[n][m],b[m][n],c[n][n];
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				scanf("%i",&a[i][j]);
			}
		}
		for(int i=0; i<m; i++){
			for(int j=0; j<n; j++){
				b[i][j]=a[j][i];
			}
		}
		for(int i = 0; i < n; i++){
	        for(int j = 0; j < n; j++){
	            c[i][j] = 0;
	            for(int k = 0; k < m; k++)
	                c[i][j] += a[i][k] * b[k][j];
	        }
	    }
	    printf("Test %d:\n",h);
	    for(int i=0; i<n; i++){
	    	for(int j=0; j<n; j++){
	    		printf("%i ",c[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}

