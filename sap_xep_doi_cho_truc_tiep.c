#include <stdio.h>
int main(){
	int n;
	scanf("%i",&n);
	int a[1005];
	for(int i=0; i<n; i++) scanf("%i",&a[i]);
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i] > a[j]){ 
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
		printf("Buoc %i: ",i+1);
		for(int l=0; l<n; l++) printf("%i ",a[l]);
		printf("\n");
		
	}

	return 0;
}

