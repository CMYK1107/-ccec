#include <stdio.h>
#include <string.h>
int check(char s[]){
	int l=strlen(s);
	for(int i=0; i<l/2; i++){
			if(s[i] != s[l-i-1]){
			return 0;
		}
	}
	return 1;
}
int main(){
	char x[20],s[20];
	scanf("%s%s",x,s);
	if(check(x) && !check(s) || !check(x) && check(s)) printf("YES\n");
	else printf("NO\n");
	return 0;
}

