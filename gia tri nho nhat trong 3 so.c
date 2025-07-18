#include <stdio.h>
#include <math.h>
int min(int x,int y){
	if(x<y) return x;
	else return y;
}
int main(){
	int x,y,z;
	scanf("%i%i%i",&x,&y,&z);
	printf("%i",min(x,min(y,z)));
	return 0;
}

