//kiem tra xem chu so dau va cuoi co bang nhau khong
#include<stdio.h>
int main(){
	int n, sodau, t;
	scanf("%d", &t);
	while(t--){
	scanf("%d", &n);
	int socuoi=n%10;
	int sodau=n;
	while(sodau>=10){
		sodau/=10;
	}
	if(socuoi==sodau) printf("YES\n");
	else printf("NO\n");
}
	return 0;
}
