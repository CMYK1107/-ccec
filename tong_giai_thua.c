#include<stdio.h>
#define ull unsigned long long
int main(){
	ull n;
	scanf("%llu",&n);
	ull ans=0;
	for(ull i=1;i<=n;i++){
		ull res = 1;
    	for (ull j = 1; j <= i; j++) {
        	res *= j;
    	}
    	ans+=res;
	}
	printf("%llu",ans);
	return 0;
}
