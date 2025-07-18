#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a=1,b=2*n-1;
	for(int i=1;i<=n;i++){
		int m=n;
		for(int j=1; j<2*n; j++){
			if(j<a){
				printf("%d",m--);
			}
			else if(j>=b){
				printf("%d",m++);
			} 
			else printf("%d",m);
		}
		a++;
		b--;
		printf("\n");
		
	}
	a-=2;
	b+=2;
	for(int i=1; i<n; i++){
		int	m=n;
		for(int j=1; j<2*n; j++){
			if(j<a){
				printf("%d",m--);
			}else if(j>=b){
				printf("%d",m++);
			}
			else printf("%d",m);
		}
		a--;
		b++;
		printf("\n");
	}
	
	return 0;
}

