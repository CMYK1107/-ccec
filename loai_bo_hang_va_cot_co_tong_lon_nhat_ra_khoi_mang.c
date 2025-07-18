#include <stdio.h>
#include <math.h>
int main(){
	int t;
	scanf("%i",&t);
	for(int k=1; k<=t; k++){
		int n,m,maxh=0,maxc=0,mi;
		scanf("%i%i",&n,&m);
		int a[n+1][m+1];
		for(int i=0; i<=n; i++)
			for(int j=0; j<=m; j++)
				a[i][0]=0,a[0][j]=0;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				scanf("%i",&a[i][j]);
			}
		}
		for(int i=1; i<=n; i++){
			int h=0;
			for(int j=1; j<=m; j++){
				h+=a[i][j];
			}
			if(maxh < h){
				maxh=h;
			}
			
			a[i][0]=h;
		}
		for(int i=0; i<=n; i++){
			if(a[i][0] == maxh){
				for(int j=0; j<=m; j++) a[i][j]=0;
			}
		}
		for(int i=1; i<=m; i++){
			int c=0;
			for(int j=1; j<=n; j++){
				c+=a[j][i];
			}
			if(maxc < c) maxc=c;
			a[0][i]=c;
		}
		for(int i=0; i<=m; i++){
			if(a[0][i] == maxc){
				for(int j=0; j<=n; j++) a[j][i]=0;
			}
		}
		printf("Test %d:\n",k);
		for(int i=1; i<=n; i++){
			int ck=0;
			for(int j=1; j<=m; j++){
				if(a[i][0] == 0|| a[0][j] == 0)continue;
				else {
					ck=1;
					printf("%i ",a[i][j]);
				}
			}
			if(ck)
			printf("\n");
		}
	}
	return 0;
}

