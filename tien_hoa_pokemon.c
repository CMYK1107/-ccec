#include <stdio.h>
#include <string.h>
int main(){
	int n,max=0,res=0;
	char maxa[50];
	scanf("%i",&n);
	while(2*n--){
		int k,p;
		char a[50];
		int s=0;
		scanf("%s%i%i",a,&p,&k);
		while(k/p>0){
			s+=k/p;
			k=k-(k/p)*p+(k/p)*2;
		}
		res+=s;
		if(s>max){
			max=s;
			strcpy(maxa,a);
		}

	}
	printf("%i\n%s",res,maxa);
	return 0;
}

