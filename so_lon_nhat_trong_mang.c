#include <stdio.h>
#define ull unsigned long long
int main(){
	int n,tmpa=1e9,tmpb=1e9;
	scanf("%i",&n);
	while(n--){
		int a,b;
		scanf("%i%i",&a,&b);
		if(a < tmpa) tmpa=a;
		if(b < tmpb) tmpb=b;
	}
	printf("%llu",(ull)tmpa*tmpb);
	return 0;
}

