#include<stdio.h>
int max(int a,int b){
	return (a>b)?a:b;
}
int min(int a,int b){
	return (a<b)?a:b;
}
int main(){
	int x1,y1,x2,y2,x3,y3,x4,y4;
	scanf("%d %d %d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
	int min_x=min(x1,x3);
	int max_x=max(x2,x4);
	int min_y=min(y1,y3);
	int max_y=max(y2,y4);
	int canh=max(max_x-min_x,max_y-min_y);
	printf("%d",canh*canh);
	return 0;
}
