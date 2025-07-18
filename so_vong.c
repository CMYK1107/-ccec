#include<stdio.h>
#include<string.h>
#include<stdbool.h>
bool checker(char *s){
	int l=strlen(s);
	char cop[120];
	strcpy(cop,s);
	char tmp[120];
	for(int j=1;j<=l;j++){
		int nho=0;
		for(int i=l-1;i>=0;i--){
			int so=(s[i]-'0')*j+nho;
			nho=so/10;
			tmp[i]=(so%10)+'0';
			
		}
		tmp[l]='\0';
		if(nho != 0) return 0;
		int ktra=0;
		for(int k=0;k<l;k++){
			if(strcmp(tmp,cop)==0){
				ktra = 1;
				break;
			}
			char so_dau = tmp[0];
			for(int i=0; i<l-1; i++){
				tmp[i] = tmp[i+1];
			}
			tmp[l-1] = so_dau;
			
		}
		if(ktra==0) return 0;
	}
	return 1;
}
int main(){
	int n;
	char s[120];
	scanf("%d",&n);
 	while(n--){
 		scanf("%s",s);
 		if(checker(s)) printf("YES\n");
 		else printf("NO\n");
	 }
	
}
