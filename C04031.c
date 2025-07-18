#include <stdio.h>
#include <math.h>
void solve(int 	t){
	int n;
	scanf("%d",&n);
	int a[n],b[n],max=0;
	b[0]=1;
	for(int i=0; i<n; i++)	scanf("%d",&a[i]);
	for(int i=1; i<n; i++){
		if(a[i] > a[i-1]){
			b[i]=b[i-1]+1;
		}else{
			b[i]=1;
		}
		max=fmax(b[i],max);
	}	
	printf("Test %d:\n%d\n",t,max);
	for(int i=0; i<n; i++){
		if(b[i]==max){
			for(int j=0; j<max; j++){
				printf("%d ",a[i+j-max+1]);
			}
			printf("\n");
			i+=max-1;
		}
	}
	printf("\n");
}
int main(){
	int t;
	scanf("%d",&t);
	int m=t;
	while(t--){
		solve(m-t);
	}
	return 0;
}
