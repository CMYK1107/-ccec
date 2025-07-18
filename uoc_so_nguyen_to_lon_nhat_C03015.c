#include <stdio.h>
#include <math.h>
#define N 1000006

int main(){
	int x;
	scanf("%d",&x);
	while(x--){
		long long n;
		scanf("%lld",&n);
		long ans;
		for(long long i=2; i*i<n; i++){
      if(n%i==0){
        ans=i;
        while(n%i==0) n/=i;
      }
		}
		if(n>1) ans =n;
    printf("%ld\n",ans);
	}
	return 0;
}

