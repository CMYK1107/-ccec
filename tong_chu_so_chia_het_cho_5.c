#include <stdio.h>
#include <math.h>
#define N 100005
int p[N]={0};
int f[N];
void sang(){
	for(int i=2; i<=sqrt(N); i++){
		if(!p[i]){
			for(int j=i*i; j<=N; j+=i){
				p[j]=1;
			}
		}
	}
	int k=0;
	for(int i=2; i<=N; i++){
		if(!p[i]) f[k++]=i;
	}
}
int check(int n){
	int s=0;
	while(n!=0){
		s+=n%10;
		n/=10;
	}
	if(s%5==0) return 1;
	else return 0;
}
int main(){
	sang();
	int n;
	scanf("%d",&n);
	int i=0,ans=0;
	while(f[i]<=n){
		if(check(f[i])){
			printf("%d ",f[i]);
			ans++;
		}
		i++;
	}
	printf("\n%d",ans);
	return 0;
}

