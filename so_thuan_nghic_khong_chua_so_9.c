#include <stdio.h>
int check(int n){
	int m=n,s=0,x=0;
	int ck=0;
	while(n!=0){
		if(n%10 == 9) break;
		x=x*10+n%10;
		n/=10;
	}
	if( x == m) return 1;
	else return 0;
}
int main(){
	int n,ans=0;
	scanf("%d",&n);
	for(int i=2; i<=n; i++) {
		if(check(i)){
			printf("%d ",i);
			ans++;
		}
	}
	printf("\n%d",ans);
	return 0;
}

