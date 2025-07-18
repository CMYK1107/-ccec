#include <stdio.h>
#include <stdlib.h>
#define N 100000
int check1(int n){
	int res=11;
	while(n!=0){
		if(n%10>res){
			return 0;
		}
		res=n%10;
		n/=10;
	}
	return 1;
}
int cmp(const void*a,const void*b){
	return ((int*)b)[1]-((int*)a)[1];
}
int main(){
	int n,size=0;
	int a[N][2]={0};
	while(scanf("%d",&n)==1){
		if(check1(n)){
			int ck=0;
			for(int i=0;i<size;i++){
				if(a[i][0]==n){
					a[i][1]++;
					ck=1;
					break;
				}
			}
			if(ck==0){
				a[size][0]=n;
				a[size][1]=1;
				size++;
			}
		}
	}
	qsort(a,size,2*sizeof(int),cmp);
	for(int i=0;i<size;i++){
		printf("%d %d\n",a[i][0],a[i][1]);
	}
	return 0;
}
