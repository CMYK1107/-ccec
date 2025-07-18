#include <stdio.h>
#define N 10006
#define ull unsigned long long
ull p[N],f[N];
int k=0;
void sang(){
	p[0]=0,p[1]=1;
	for(int i=2; i<=90; i++){
		p[i]=p[i-1]+p[i-2];
	}
}
void solve (){
	int n,k=0;
	scanf("%i",&n);
	int a[n][n];
	int l=0,r=n-1,top=0,bot=n-1;
	while(l <= r && top <= bot){
		for(int i=l; i<=r; i++){
			a[top][i]=p[k++];
		}top++;
		for(int i=top; i<=bot; i++){
			a[i][r]=p[k++];
		}r--;
		if(top <= bot){
			for(int i=r; i>=l; i--){
				a[bot][i]=p[k++];
			}bot--;
		}
		if(l <= r){
			for(int i=bot; i>=top; i--){
				a[i][l]=p[k++];
			}l++;
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%i ",a[i][j]);
		}
		printf("\n");
	}
}
int main(){
	sang();
	solve();
	return 0;
}

