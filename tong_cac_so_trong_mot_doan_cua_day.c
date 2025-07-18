#include <stdio.h>
#define ull unsigned long long
int main(){
	int u,d,n;
	scanf("%i%i%i",&u,&d,&n);
	ull sum=0;
	for(int i=0; i<n; i++){
		sum+=u+i*d;
	}
	printf("%llu",sum);
	return 0;
}

