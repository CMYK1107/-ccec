#include<stdio.h>
int main(){
	int n, t, s;
	scanf("%d", &s);
	while(s--){
	scanf("%d", &n);
	t=0;
	while(n>0){
		t=t+n%10;
		n=n/10;
	}
	printf("%d\n", t);
	}
	return 0;
}
