#include <stdio.h>
#define ll long long
int gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b);
}
ll lcm(ll a,ll b){
	return (ll)(a*b)/gcd(a,b);
}
int rut_gon(int a,int b){
	int ans=gcd(a,b);
	return a/ans;
}
int main(){
	int t;
	scanf("%i",&t);
	for(int i=1; i<=t; i++){
		int n,m,x,y;
		scanf("%i%i%i%i",&n,&m,&x,&y);
		printf("Case #%i:\n",i);
		int N=n/gcd(n,m),M=m/gcd(n,m),X=x/gcd(x,y),Y=y/gcd(x,y);
		ll N1=(N*(lcm(M,Y))/M),X1=(X*(lcm(M,Y))/Y),M1=lcm(M,Y),Y1=M1;
		printf("%i/%i %i/%i\n",N1,M1,X1,Y1);
		ll N2=N1+X1,M2=M1;
		int GCD_cong=gcd(N2,M1);
		printf("%i/%i\n",N2/GCD_cong,M2/GCD_cong);
		printf("%i/%i\n",rut_gon(y*n,x*m),rut_gon(x*m,n*y));
	}
	
	return 0;
}

