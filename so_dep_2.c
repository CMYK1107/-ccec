#include <stdio.h>
#include <math.h>
#define ll long long
int check(ll n ){
	ll m=n,x=0,s=0;
	while(n!=0){
		s+=n%10;
		x=x*10+n%10;
		n/=10;
	}
	if(x==m && s%10==0) return 1;
	else return 0;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,res=0;
		scanf("%d",&n);
		ll x=pow(10,n-1),y=pow(10,n);
		for(int i=x; i<y; i++){
			if(check(i)) res++;
		}
		printf("%d\n",res);
	}
	return 0;
}

