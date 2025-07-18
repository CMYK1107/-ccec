#include <stdio.h>
#define N 100006
int p[N]={0};
void sang(){
	p[0]=p[1]=1;
	for(int i=2; i*i <= N; i++){
		if(!p[i]){
			for(int j=i*i; j<=N; j+=i){
				p[j]=1;
			}
		}
	}
}

int main(){
	sang();
	int n,max=0;
	int b[50][50];
	scanf("%i",&n);
	int a[n+1][n+1];
	a[0][0]=0;
	for(int i=1; i<=n; i++)
		for(int j=1; j<=n; j++)
			scanf("%i",&a[i][j]);
	for(int i=1; i<=n; i++){
		int res=1;
		for(int j=1; j<=n; j++){
			if(!p[a[i][j]]){
				b[i][res++]=a[i][j];
			}
		}
		a[i][0]=res-1;
		if(max < res-1) max=res-1;
	}
	for(int i=0; i<=n; i++){
		for(int j=0; j<=n; j++){
			if(a[i][0] == max){
				printf("%i\n",i);
				for(int k=1; k<=max; k++){
					printf("%i ",b[i][k]);
				}
				return 0;
			}
		}
	}
	return 0;
}

