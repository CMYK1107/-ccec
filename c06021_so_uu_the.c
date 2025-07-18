#include <stdio.h>
#include <string.h>
int main(){
	int n;
	scanf("%i",&n);
	while(n--){
		int c=0,l=0,ck=1;
		char a[1000];
		scanf("%s",a);
		int n=strlen(a);
		for(int i=0; i<n; i++){
			if(a[i] <'0'|| a[i]>'9'){
				printf("INVALID\n");
				ck=0;
				break;
			}
			if((a[i]-'0')%2==0) c++;
			else l++;
		}
		if(ck){
			if((l%2==0 && c>l) || (l%2!=0 && c<l)) printf("YES\n");
			else  printf("NO\n");
		}
	}
	return 0;
}

