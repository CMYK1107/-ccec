#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>
#include<assert.h>
typedef struct{
	long x,y;
}map;
void swap(map *a, map *b){
	map temp=*a;
	*a=*b;
	*b=temp;
}
int space(map a[], int l,int r){
	int i=l-1;
	long pos=a[r].x;
	for(int j=l; j<r; j++){
		if(a[j].x<pos){
			i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[r]);
	return i+1;
}
void q_sort(map a[], int l, int r){
	if(l<r){
		int p=space(a,l,r);
		q_sort(a,l,p-1);
		q_sort(a,p+1,r);
	}
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		map a[n+1];
		for(int i=1; i<=n; i++){
			a[i].y=i;
			scanf("%ld",&a[i].x);
		}
		q_sort(a,1,n);
		int min=INT_MAX,ans;
		for(int i=2; i<=n; i++){
			if(a[i].x == a[i-1].x){
				if(a[i].y < min){
					min=a[i].y;
					ans=a[i].x;
				}
				if(a[i-1].y < min){
					min=a[i-1].y;
					ans=a[i-1].x;
				}
			}
		}
		if(min != INT_MAX){
			printf("%ld\n",ans);
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}
