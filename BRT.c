#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a,const void *b){
	return *(int*)a-*(int*)b;
}
int main(){
	int t;
	scanf("%d ",&t);
	while(t--){
		int n;
		int min=INT_MAX;
		scanf("%d",&n);
		int a[n+1];
		for(int i=0;i<n;i++) scanf("%d",&a[i]);
		qsort(a,n,sizeof(int),cmp);
		for(int i=0;i<n;i++){
			if(abs(a[i+1]-a[i])<min){
				min=abs(a[i+1]-a[i]);
			}
		}
		int dem=0;
		for(int i=0;i<n-1;i++){
			if(abs(a[i+1]-a[i])==min){
				dem++;
			}
		}
		printf("%d %d\n",min,dem);
		for(int i=0;i<n;i++) a[i]=0;
	}
	
	return 0;
}
