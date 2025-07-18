#include <stdio.h>
void swap(int *a,int*b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
int qui(int a[],int l,int r){
	int i=l-1;
	int q=a[r];
	for(int j=l; j<r; j++){
		if(a[j] < q){
			i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[r]);
	return i+1;
}
void sort(int a[],int l,int r){
	if(l<=r){
		int q=qui(a,l,r);
		sort(a,l,q-1);
		sort(a,q+1,r);
	}
}
int main(){
	int n;
	scanf("%i",&n);
	int a[n];
	for(int i=0; i<n; i++) scanf("%i",&a[i]);
	sort(a,0,n-1);
	for(int i=0; i<n; i++){
		if(a[i]%2==0) printf("%i ",a[i]);
	}
	for(int i=0; i<n; i++){
		if(a[i]%2!=0) printf("%i ",a[i]);
	}
	return 0;
}

