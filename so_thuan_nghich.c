#include <stdio.h>
#include <string.h>
int main(){
	int  n;
	scanf("%i",&n);
	while(n--){	
		char s[20];
		scanf("%s",s);
		int l=strlen(s);
		int ck=1;
		for(int i=0; i<l/2; i++){
			if(s[i] != s[l-i-1]){
				printf("NO\n");
				ck=0;
				break;
			}
		}
		if(ck) printf("YES\n");
	}
	return 0;
}

