#include<stdio.h>
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if(b != 0){
		long long tich=(long long)a*b;
		double thuong = (double)a / b;;
		printf("%d\n%d\n%lld\n%d\n%d\n%.2lf", a+b, a-b, tich,a/b,a%b,thuong);
	}
	else printf("0");
	return 0;
}

