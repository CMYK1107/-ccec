#include <stdio.h>
#include <string.h>
void add0(char a[500],int *l1,char b[500],int *l2){
		*l1=strlen(a);
		*l2=strlen(b);
	while(*l1 > *l2){
		for(int i=*l1; i>=0; i--){
			b[i+1]=b[i];
		}
		b[0]='0';
		(*l2)++;
	}
}
int main(){
	int n;
	scanf("%i",&n);
	while(n--){
		char a[500],b[500];
		int c[500];
		scanf("%s%s",a,b);
		int l1=0,l2=0;
		add0(a,&l1,b,&l2);
		add0(b,&l2,a,&l1);
		int res=0;
		for(int i=l1-1; i>=0; i--){
			if(i==0 && ((a[i]-'0') + (b[i]-'0') + res) >= 10) c[i]= ((a[i]-'0') + (b[i]-'0') + res) ;
			else c[i]=((a[i]-'0') + (b[i]-'0') + res)%10;
			res=((a[i]-'0') + (b[i]-'0') + res)/10;
		}
		for(int i=0; i<l1; i++){
			printf("%i",c[i]);
		}
	
		printf("\n");
	}
	return 0;
}

