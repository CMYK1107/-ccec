#include <stdio.h>
#include <stdlib.h>
typedef struct {
	int ma;
	char ten[50],ngay_sinh[13];
	double a,b,c,tong;
}Sv;
void inp(Sv sortsv[],int n){
	for(int i=0; i<n; i++){
		sortsv[i].ma=i+1;
		scanf("\n%[^\n]",sortsv[i].ten);
		scanf("\n%[^\n]",sortsv[i].ngay_sinh);
		scanf("%lf %lf %lf",&sortsv[i].a,&sortsv[i].b,&sortsv[i].c);
		sortsv[i].tong=sortsv[i].a+sortsv[i].b+sortsv[i].c;
	}
}
int cmp(const void *a,const void *b){
	Sv *A=(Sv *)a;
	Sv *B=(Sv *)b;
	if(A->tong < B->tong) return 1;
	if(A->tong > B->tong) return -1;
	return (A->ma-B->ma);
}
void out(Sv sortsv[],int n){
	for(int i=0; i<n; i++){
		printf("%i %s %s %.1lf\n",
			sortsv[i].ma,
			sortsv[i].ten,
			sortsv[i].ngay_sinh,
			sortsv[i].tong
		);
	}
}
int main(){
	int n;
	scanf("%i",&n);
	Sv sortsv[n];
	inp(sortsv,n);
	qsort(sortsv,n,sizeof(Sv),cmp);
	out(sortsv,n);
	return 0;
}

