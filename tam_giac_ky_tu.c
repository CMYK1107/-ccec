#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int ans=97;
	for(int i=1;i<=n;i++){
		if(i%2!=0){
			int k=ans;
			for(int j=1;j<=i;j++){
				printf("%c ",ans);
				ans++;
			}
		}else{
			int k=ans+i-1;
			for(int j=1;j<=i;j++){
				printf("%c ",k--);
				ans++;
			}
			
		}
		printf("\n");
	}
	return 0;
}

