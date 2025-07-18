#include <stdio.h>

int main(){
	int n;
	unsigned long long d;
	scanf("%i",&n);
	while(n--){
		scanf("%llu",&d);
		printf("%llu\n",d*d);
	}
	return 0;
}

