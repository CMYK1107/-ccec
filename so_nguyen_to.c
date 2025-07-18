#include<stdio.h>
#include<math.h>
int main(){
	int n, t, i, kt;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		kt=1;
		if(n==1) kt=0;
		else{
			for(i=2;i<=sqrt(n);i++){
				if(n%i==0) kt=0;
			}
		}
		if(kt==1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
	
}
