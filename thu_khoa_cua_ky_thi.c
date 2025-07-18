#include <stdio.h>
#include <stdlib.h>
typedef struct {
	char ten[50],ngay_sinh[15];
	double a,b,c,tong;
	int ma;
}Search;
Search Se[100];
double max=0;
void inp(int n,double *max){
	for(int i=0; i<n; i++){
		Se[i].ma=i+1;
		scanf("\n%[^\n]",Se[i].ten);
		scanf("\n%[^\n]",Se[i].ngay_sinh);
		scanf("%lf %lf %lf",&Se[i].a,&Se[i].b,&Se[i].c);
		getchar();
		Se[i].tong=Se[i].a+Se[i].b+Se[i].c;
		if(Se[i].tong > *max) *max=Se[i].tong;
	}
}
void out(int n, double max){
	for(int i=0; i<n; i++){
		if(Se[i].tong == max)
			printf("%i %s %s %.1lf\n",Se[i].ma,Se[i].ten,Se[i].ngay_sinh,Se[i].tong);
	}
}
int main(){
	int n;
	scanf("%i",&n);
	inp(n,&max);
	out(n,max);
	return 0;
}

