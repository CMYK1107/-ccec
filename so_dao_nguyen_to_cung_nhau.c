#include <stdio.h>
int dao(int n){
	int x=0;
	while(n!=0){
		x=x*10+n%10;
		n/=10;
	}
	return x;
}
int gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b);
}
int main(){
	int t;
	scanf("%i",&t);
	while(t--){
		long n;
		scanf("%i",&n);
		if(gcd(n,dao(n))==1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

