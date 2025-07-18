
#include <stdlib.h>
#include <stdio.h>
int a[10][10]={0};
void swap(int n, int m)
{
    for (int i = n; i >= 0; i--)
        for (int j = m; j >= 0; j--)
            a[i][j] = 1-a[i][j];
}
int main(){
	int n,s=0;
	scanf("%d",&n);
	char x;
	for(int i=0;i<n;i++){
		scanf("\n");
		for(int j=0;j<n;j++){
			scanf("%c",&x);
			a[i][j]=x-'0';
		}
	}
	for(int i=n-1;i>=0;i--){
		for(int j=n-1;j>=0;j--){
			if(a[i][j]==1){
				swap(i,j);
				s++;
			}
		}
	}
	printf("%d",s);
}

