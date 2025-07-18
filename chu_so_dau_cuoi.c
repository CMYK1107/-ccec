//in ra chu swo dau titen va chu so cuoi cung
#include<stdio.h>
int main(){
	int n, sodau, socuoi;
	scanf("%d", &n);
	socuoi=n%10;
	sodau=n;
	while(sodau>=10){
		sodau/=10;
	}
	printf("%d %d", sodau, socuoi);
	return 0;
}
