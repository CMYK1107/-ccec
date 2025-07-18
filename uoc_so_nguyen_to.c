#include <stdio.h>
#include <math.h>
#define N 1000006
int f[N],p[N]={0};

void sang(){
	p[0]=p[1]=1;
	for(int i=2;i<=sqrt(N);i++){
		if(p[i]==0){
			for(int j=i*i; j<=N; j+=i){
				p[j]=1;
			}
		}
	}
	int k=0;
	for(int i=2; i<=N; i++){
		if(p[i] == 0){
			f[k++]=i;
		}
	}
}
int main(){
	sang();
	int x;
	scanf("%d",&x);
	while(x--){
		long n;
		scanf("%ld",&n);
		int ck=1;
		for(int i=sqrt(n); i>=0; i--){
			if(n%f[i]==0){
				printf("%d\n",f[i]);
				ck=0;
				break;
			}
		}
		if(ck==1) printf("%d\n",n);
	}
	return 0;
}

