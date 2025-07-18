#include <stdio.h>

int main(){
	int t;
	scanf("%i",&t);
	for(int h=1; h<=t; h++){
		int n,m;
		scanf("%i",&n);
		int a[n][n],b[n][n],c[n][n];
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if(j<=i) a[i][j]=j+1;
				else a[i][j]=0;
			}
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				b[i][j]=a[j][i];
			}
		}
		for(int i = 0; i < n; i++){
	        for(int j = 0; j < n; j++){
	            c[i][j] = 0;
	            for(int k = 0; k < n; k++)
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

