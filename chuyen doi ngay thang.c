#include <stdio.h>

int main(){
	int y=0,w=0,d;
	scanf("%d",&d);
	if(d>=365){
		y=d/365;
		d%=365;
	}
	if(d>=7){
		w=d/7;
		d%=7;
	}
	printf("%d %d %d",y,w,d);
	
	return 0;
}

