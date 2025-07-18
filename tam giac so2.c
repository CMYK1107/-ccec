#include <stdio.h>

int main(){
	int n;
	scanf("%i",&n);
	for(int i=1;i<=n;i++){
		if(i%2!=0){
			int res=1;
			int k=0;
			while(k<i){
				printf("%i",res);
				res+=2;
				k++;
			}
		}
		else{
			int res=2;
			int k=0;
			while(k<i){
				printf("%i",res);
				res+=2;
				k++;
			}
		}
		printf("\n"); 
	}
	return 0;
}

