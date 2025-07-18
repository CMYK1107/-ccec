#include <stdio.h>
#include <string.h>
int check(char x[100],char y[100]){
	char a[100],b[100];
	strcpy(a,x);
	strcpy(b,y);
	int l1=strlen(a);
	int l2=strlen(b);
	for(int i=0; i<l1; i++){
		if(a[i] >= 'A' && a[i] <= 'Z'){
			a[i]+=32;
		}
	}
	for(int i=0; i<l2; i++){
		if(b[i] >= 'A' && b[i] <= 'Z'){
			b[i]+=32;
		}
	}
	if(strcmp(a,b)==0) return 0;
	return 1;
}
void inp(char a[100][100],int *t){
	*t=0;
	while(scanf("%s",a[*t])!=-1){
		(*t)++;
		if(getchar()=='\n') break;
	}
}
int main(){
	int n;
	scanf("%i",&n);
	getchar();
	int m=n;
	while(n--){
		char a[100][100],b[100][100];
		int l1=0,l2=0;
		inp(a,&l1);
		inp(b,&l2);
		printf("Test %i: ",m-n);
		for(int i=0; i<l2; i++){
			for(int j=0; j<l1; j++){
				if(check(b[i],a[j])){
					printf("%s ",a[j]);
				}
			}
		}
		printf("\n");
	}
	return 0;
}

