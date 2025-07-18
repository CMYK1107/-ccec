#include <stdio.h>
int gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b);
}
int lcm(int a,int b){
	return a/gcd(a,b)*b;
}
int main(){
	int t; 
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n+1],b[n+2];
		for(int i=1;i<=n;i++) scanf("%d",&a[i]);
		b[1]=a[1];
		for(int i=2;i<=n;i++){
			b[i]=lcm(a[i-1],a[i]);
		}
		b[n+1]=a[n];
		for(int i=1;i<=n+1;i++){
			printf("%d ",b[i]);
		}
	}

	
	return 0;
}

