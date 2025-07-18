#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
	int t;
	scanf("%i",&t);
	while(t--){
		char a[20];
		scanf("%s",a);
		int l=strlen(a);
		int max=0,min=10;
		for(int i=0; i<l; i++){
			max=fmax(a[i]-'0',max);
			min=fmin(a[i]-'0',min);
		}
		printf("%i %i\n",max,min);
		//else printf("%i\n",max);
	}
	return 0;
}

