//in ra gia tri cua n co ghi so bo test
#include<stdio.h>
int main(){
	int  t;
	unsigned long long n;
	scanf("%d", &t);
	while(t--){
		scanf("%llu", &n);
		printf("%llu\n", n*n);
	}
	return 0;
}

