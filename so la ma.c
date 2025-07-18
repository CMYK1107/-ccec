#include <stdio.h>
#include <string.h>
int main(){
	int a[100]={0};
	a[73]=1;a[86]=5;a[88]=10;a[76]=50;a[67]=100;a[68]=500;a[77]=1000;
	int n;
	scanf("%d",&n);
	while(n--){
		char b[100];
		scanf("%s",b);
		int l=strlen(b);
		int ans=0;
		for(int i=0;i<l;i++){
			int k=0;
			if(i!=l-1) k=a[b[i+1]];
			if(a[b[i]]<k){
				ans+=k-a[b[i]];
				i++;
			}else{
				ans+=a[b[i]];
				
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}

