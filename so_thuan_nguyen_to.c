#include<stdio.h>
#include<stdbool.h>
bool ktra(int n){
	if(n<2) return 0;
	if(n==2 || n==3) return 1;
	if(n%2==0 || n%3==0) return 0;
	for(int i=5;i*i<=n;i+=6){
		if(n%i==0 || n%(i+2)==0) return 0;
	}
	return 1;
}
bool check2(int n){
	int m=n;
	while(m!=0){
		if(!ktra(m%10)) return 0;
		m/=10;
	}
	return 1;
}
bool check3(int n){
	int sum=0;
	while(n!=0){
		sum+=n%10;
		n/=10;
	}
	if(!ktra(sum)) return 0;
	return 1;
}
bool cheeck(int n){
	if(ktra(n) && check2(n) && check3(n)){
		return 1;
	}
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int dem=0;
		long l,r;
		scanf("%ld %ld",&l,&r);
		for(int i=l;i<=r;i++){
			if(cheeck(i))
			 dem++;
		}
		printf("%d\n",dem);
	}
}
