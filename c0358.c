#include<stdio.h>
#define ull  unsigned long long
ull gcd(ull a, ull b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}
ull lcm(ull a, ull b) {
    return (a*b) / gcd(a, b);
}
int main(){
	ull n,m,t;
	scanf("%d",&t);
	while(t--){
		scanf("%llu",&n);
		ull ans=n;
		for(int i=1; i<=n; i++){
			ans=lcm(ans,i);
		}
		printf("%llu\n",ans);
	}
	
	return 0;
}
