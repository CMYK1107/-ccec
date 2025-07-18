#include <stdio.h>
#include <math.h>
int main(){
	int n,m;
	scanf("%i",&m);
	while(m--){
		scanf("%i",&n);
		int k=sqrt(n);
		if(k*k==n) printf("YES\n");
		else printf("NO\n");	
	}
	return 0;
}

