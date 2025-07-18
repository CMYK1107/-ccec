#include <stdio.h>
void swap(int *a,int *b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
int main(){
	int n;
	scanf("%i",&n);
	int a[1005];
	for(int i=0; i<n; i++) scanf("%i",&a[i]);
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i] > a[j]) swap(&a[i],&a[j]);
		}
		printf("Buoc %i:",i+1);
		for(int l=0; l<n; l++) printf("%i ",a[l]);
		printf("\n");
		
	}

	return 0;
}

