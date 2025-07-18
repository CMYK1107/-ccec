#include <stdio.h>
#define ull  long long
int main(){
	int t;
	scanf("%i",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    int a[n];
			ull ans=-1e9,max=0;
	    for(int i=0; i<n; i++){
				scanf("%lld",&a[i]);
				max+=a[i];
				if(ans < max){
					ans = max;
				}
				if(max < 0){
					max = 0;
				}
			}
	    printf("%d\n",ans);
	}
	return 0;
}

