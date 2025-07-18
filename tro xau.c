#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int check(char s1[],char s2[],char s[],int n){
	char a[2000]="\0";
	for(int res=0; res<=2*n; res++){
		if(!strcmp(a,s)){
			return res;
		}
		int q=0;
		for(int i=0; i<n; i++){
			a[q++]=s2[i];
			a[q++]=s1[i];
		}
		for(int i=0;i<n;i++){
			s1[i]=a[i];
			s2[i]=a[i+n];
		}
	}
	return -1;
}
int main(){
	while(1){
		int n;
		scanf("%d",&n);
		if(n==0) return 0;
		char a[1000],c[2000],b[1000];
		scanf("%s%s%s",a,b,c);
		printf("%d\n",check(a,b,c,n));
	}
	return 0;
}

