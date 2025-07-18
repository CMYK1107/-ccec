#include <stdio.h>
int main(){
	int n,m;
	scanf("%i%i",&n,&m);
	int a[1001]={0},b[1001]={0};
	for(int i=0;i<n;i++){
		int x;scanf("%i",&x);
		a[x]=1;
	}
	for(int i=0;i<m;i++){
		int x;scanf("%i",&x);
		b[x]=1;
	}
	for(int i=0; i< 1001; i++){
		if(a[i] == 1 && b[i] == 1){
			printf("%i ",i);
		}
	}
	printf("\n");
	for(int i=0; i< 1001; i++){
		if(a[i] == 1 && b[i] == 0){
			printf("%i ",i);
		}
	}
	printf("\n");
	for(int i=0; i< 1001; i++){
		if(a[i] == 0 && b[i] == 1){
			printf("%i ",i);
		}
	}
	printf("\n");
	return 0;
}

