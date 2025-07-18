#include<stdio.h>
void vong_xoan(int n,int m,int mt[n][m]){
	int l=0,r=m-1,top=0,bot=n-1;
	while(l <= r && top <= bot){
		for(int i=l ; i<=r; i++){
			printf("%d ",mt[top][i]);
		}
		top++;
		for(int i=top ; i<=bot; i++){
			printf("%d ",mt[i][r]);
		}
		r--;
		if(top<=bot){
			for(int i=r ; i>=l ;i--){
				printf("%d ",mt[bot][i]);
			}
			bot--;
		}
		if(l<=r){
			for(int i=bot ; i>=top ;i--){
				printf("%d ",mt[i][l]);
			}
			l++;
		}
	}
}
int main(){
	
	int n,m,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&m);
		int a[n][m];
		for(int i=0; i<n; i++)
			for(int j=0; j<m; j++)
				scanf("%d",&a[i][j]);
		vong_xoan(n,m,a);	
		printf("\n");
		
	}
	return 0;
}
