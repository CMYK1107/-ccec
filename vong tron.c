#include <stdio.h>

int main(){
	char s[55];
	scanf("%s",s);
	int l[27],r[27];
	for(int i=0; i<=27; i++) l[i]=-1;
	for(int i=0; i<52;i++){
		if(l[s[i]-'A']==-1){
			l[s[i]-'A']=i;
		}else{
			r[s[i]-'A']=i;
		}
	}
	int tmp=0;
	for(int i=0; i<26;i++){
		for(int j=0; j<26; j++){
			if(l[i] < l[j] && l[j] < r[i] && r[j] > r[i]){
				tmp++;
			}
		}
	}
	printf("%d",tmp);
	return 0;
}

