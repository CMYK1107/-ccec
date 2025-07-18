#include <stdio.h>
#define N 100005
#define ull unsigned long long
ull f[N];
void sang(){
	f[0]=f[1]=1;
	for(int i=2;i<=100;i++){
		f[i]=f[i-1]+f[i-2];
	}
}
int main(){
	sang();
	int t;
	scanf("%i",&t);
	ull n;
	while(t--){
		int ck=0;
		scanf("%llu",&n);
		for(int i=100;i>=0;i--){
			if(f[i]==n){
				printf("YES\n");
				ck=1;
				break;
			}
		}	
		if(!ck) printf("NO\n");
	}
	
	return 0;
}

