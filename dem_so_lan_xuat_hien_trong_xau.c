#include <stdio.h>
#include <string.h>
int main(){
	int n=0;
	char a[100][100];
	while(scanf("%s",a[n]) != -1){
		int l=strlen(a[n]);
		for(int i=0; i<l; i++){
			if(a[n][i] >= 'A' && a[n][i] <= 'Z'){
				a[n][i]+=32;
			}
		}
		n++;
	}
	for(int i=0; i<n; i++){
		if(a[i][0] != 0){
			int res=1;
			for(int j=i+1; j<n; j++){
				if(!strcmp(a[i],a[j])){
					res++;
					a[j][0]=0;
				}
			}
			printf("%s %i\n",a[i],res);
		}
	}
	return 0;
}

