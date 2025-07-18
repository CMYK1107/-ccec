#include <stdio.h>
#include <string.h>
int a[10]={0};
int main(){
	char s[20];
	scanf("%s",s);
	int l=strlen(s);
	for(int i=0; i<l; i++){
		if(s[i]-'0'==2 || s[i]-'0'==3 || s[i]-'0'==5 || s[i]-'0'==7){
			a[s[i]-'0']++;
		}
	}
	for(int i=0; i<l; i++){
		if(a[s[i]-'0']!=0){
			printf("%c %d\n",s[i],a[s[i]-'0']);
			a[s[i]-'0']=0;
		}
	}
	return 0;
}

