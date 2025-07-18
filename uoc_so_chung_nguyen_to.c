#include <stdio.h>
int check(int n){
	if(n<2) return 0;
	if(n<=3) return 1;
	if(n%2==0 || n%3==0) return 0;
	for(int i=5; i*i<n; i+=6){
		if(n%i==0 || n%(i+2)==0) return 0;
	}
	return 1;
}
int sum(int n){
	int s=0;
	while(n){
		s+=n%10;
		n/=10;
	}
	return s;
}
int gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b);
}
int main(){
	int t;
	scanf("%i",&t);
	while(t--){
		int a,b;
		scanf("%i%i",&a,&b);
		if(check(sum(gcd(a,b)))) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

