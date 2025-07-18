#include<stdio.h>
int usc(int a, int b){
	int t;
	while(b>0){
		t=a%b;
		a=b; b=t;
	}
	return a;
}
int main(){
	int a, b, i, j;
	scanf("%d%d", &a, &b);
	for(i=a; i<b; i++){
		for(j=i+1; j<=b; j++){
			if(usc(i, j)==1){
				printf("(%d,%d)\n", i, j);
			}
		}
	}
	return 0;
}
