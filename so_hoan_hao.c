#include<stdio.h>
int main(){
	int n, t=0, i;
	scanf("%d", &n);
	for(i=1; i<=(n/2); i++){
		if(n%i==0) t=t+i;
	}
	if(t==n) printf("1");
	else printf("0");
	return 0;
	
}
