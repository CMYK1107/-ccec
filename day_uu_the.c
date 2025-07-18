#include <stdio.h>
#include <string.h>
int main(){
	int t;
	scanf("%i",&t);
	while(t--){
		int n=0;
		int a[100006];
		while(scanf("%d",&a[n])!=-1){
			char c = getchar();
			n++;
			if(c == '\n'){
				break;
			}
		}
		int dem=0;
		for(int i=0; i<n; i++){
			if(a[i]%2==0) dem++;
		}
		if(n%2 == 0 && dem > (n-dem)){
			printf("YES\n");
		}
		else if(n%2 != 0 && dem < (n-dem)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}

