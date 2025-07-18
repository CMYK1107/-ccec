//in ra gia tri binh ohuong co ghi so bo test
#include<stdio.h>
int main(){
	int n, t;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		double nghichdao = (double)1 / n;
		printf("%.15lf\n", nghichdao);
	}
	return 0;
}
