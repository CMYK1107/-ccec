#include <stdio.h>

int main(){
	int n;
	double x;
	scanf("%i",&n);
	while(n--){
		scanf("%lf",&x);
		printf("%.15lf\n",1/x);
	}
	return 0;
}

