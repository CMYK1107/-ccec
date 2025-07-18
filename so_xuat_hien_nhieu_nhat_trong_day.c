#include <stdio.h>
#include <math.h>
int main(){
	int b[30000]={0};
	int t;
	scanf("%i",&t);
	while(t--){
		int n,max=0;
		scanf("%i",&n);
		for(int i=0;i<30001;i++) b[i]=0;
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%i",&a[i]);
			b[a[i]]++;
			max=fmax(max,b[a[i]]);
		}
		int ck=0;
		for(int i=0; i<n; i++){
			if(b[a[i]]==max && b[a[i]]!=0){
				printf("%i ",a[i]);
				b[a[i]]=0;
			}
		}
		printf("\n");
	}
	return 0;
}

