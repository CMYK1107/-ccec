#include <stdio.h>
int a[10]={1000,500,200,100,50,20,10,5,2,1};
void solve(){
	int n,ans=0,i=0;
	scanf("%d",&n);
	while(n!=0){
		if(n-a[i] < 0){
			i++;
		}
		else{
			n-=a[i];
			ans++;
		}
	}
	printf("%d\n",ans);
}
int main(){
	int t;
	scanf("%d",& t);
	while(t--){
		solve();
	}
	return 0;
}

