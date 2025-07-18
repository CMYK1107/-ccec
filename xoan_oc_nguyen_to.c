#include <stdio.h>
#define N 100005
int f[N],p[N]={0};
void sang(){
	int k=0;
	for(int i=2; i*i<N; i++){
		if(!p[i]){
			for(int j=i*i; j<N; j+=i){
				p[j]=1;
			}
		}
	}
	for(int i=2; i<N; i++){
		if(!p[i])
			f[k++]=i;
	}
}
void solve(int z){
	int n;
	scanf("%i",&n);
	printf("Test %d:\n",z);
	int a[n][n];
	int res=0;
	int l=0,r=n-1,top=0,bot=n-1;
	while(l <= r && top <= bot){
		for(int i=l; i<=r; i++){
			a[top][i]=f[res++];
		}
		top++;
		for(int i=top; i<=bot; i++){
			a[i][r]=f[res++];
		}
		r--;
		if(top <= bot){
			for(int i=r; i>=l; i--){
				a[bot][i]=f[res++];
			}
			bot--;
		}
		if(l <= r){
			for(int i=bot; i>=top; i--){
				a[i][l]=f[res++];
			}
			l++;
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
	int t,k=1;
	scanf("%i",&t);
	while(k<=t){
		solve(k++);
	}
	return 0;
}

