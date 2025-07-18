#include<stdio.h>
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int tong = a + b;
	int hieu = a - b;
	long long tich = (long long)a * b;
	int chianguyen = a / b;
	int du = a % b;
	double chiathuc = (double)a / b;
	printf("%d\n%d\n%lld\n%d\n%d\n%.2lf", tong, hieu, tich, chianguyen, du, chiathuc);
	return 0;
}
