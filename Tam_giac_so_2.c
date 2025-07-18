#include <stdio.h>

int main(){
	int n;
	scanf("%i",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j+=2){
				printf("%i",j);
		}
		printf("\n");
	}
	return 0;
}

