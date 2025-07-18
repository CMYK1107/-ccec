#include <stdio.h>
#define ll long long
int check(ll n){
	ll m=n,s=0,x=0;
	int ck=0;
	while(n){
		if(n%10 == 6) ck=1;
		s+=n%10;
		x=x*10+n%10;
		n/=10;
	}
	if(ck && s%10 == 8 && x == m) return 1;
	else return 0;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a > b) {
		int temp = a;
		a = b;
		b = temp;
	}
	for(int i=a;i<=b;i++){
		if(check(i)) printf("%d ",i);
	}
	return 0;
}

