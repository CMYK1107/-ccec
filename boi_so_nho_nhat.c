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
		scanf("%llu %llu",&n,&m);
		ull ans=n;
		for(int i=n+1; i<=m; i++){
			ans=lcm(ans,i);
		}
		printf("%llu\n",ans);
	}
	
	return 0;
}
