#include<stdio.h>
#define ull   long long
ull gcd(ull a, ull b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}
ull lcm(ull a, ull b) {
    return (a*b) / gcd(a, b);
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		ull ans=1;
		for(ull i=1; i<=n; i++){
			ans=lcm(ans,i);
		}
		printf("%lld\n",ans);
	}
	
	return 0;
}
