#include <stdio.h>
void swap(int *a,int *b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
int main(){
	int t;
	scanf("%d",&t);
	int Q=t;
	while(t--){
	int n,m;
	scanf("%d %d",&n,&m);
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Test %d:\n",Q-t);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			for(int i2=i;i2<n;i2++)
				for(int j2=j;j2<m;j2++)
					if(a[i2][j2]<a[i][j])
						swap(&a[i2][j2],&a[i][j]);
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	}
	return 0;
}

