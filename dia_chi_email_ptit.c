#include <stdio.h>

int main(){
	char s[100][50];
	int n=0;
	while(scanf("%s",s[n]) != -1){
		for(int i=0; i<strlen(s[n]); i++){
			s[n][i] = tolower(s[n][i]);
		}
		n++;
		if(getchar() == '\n') break;
	}
	for(int i=0; i<n-1; i++){
			printf("%c",s[i][0]);
	}
	printf("%s@ptit.edu.vn",s[n-1]);
	return 0;
}

