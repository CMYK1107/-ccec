#include<stdio.h>
#include<math.h>
int main(){
	int m, n, i;
	scanf("%d%d", &m, &n);
	int a=sqrt(m), b=sqrt(n);
	if(a*a==m) i=a;
	else i=a+1; printf("%d\n", b-i+1);
	for(;i<=b;i++){
		printf("%d\n", i*i);
	}
	return 0;
}
