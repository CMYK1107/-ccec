#include<stdio.h>
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	if(b != 0){
		int tong = a + b;
		int hieu = a - b;
		int tich = a * b;
		double thuong = (double)a / b;
		int du = a % b;
		printf("%d %d %d %.2lf %d", tong, hieu, tich, thuong, du);
	}
	else printf("0");
	return 0;
}

