#include <stdio.h>
#include <math.h>
int main(){
	
	double xa,ya,xb,yb,xc,yc;
	int n;
	scanf("%d",&n);
	while(n--){
		scanf("%lf%lf%lf%lf%lf%lf",&xa,&ya,&xb,&yb,&xc,&yc);
		double A=sqrt((xb-xa)*(xb-xa)+(yb-ya)*(yb-ya));
		double B=sqrt((xc-xb)*(xc-xb)+(yc-yb)*(yc-yb));
		double C=sqrt((xc-xa)*(xc-xa)+(yc-ya)*(yc-ya));
		if(A == 0 || B == 0 || C == 0){
			printf("INVALID\n");
		}else if(A + B <= C || A + C <= B || B + C <= A){
			printf("INVALID\n");
		}
		else printf("%0.2lf\n",(sqrt((A+B+C)*(A+B-C)*(A-B+C)*(-A+B+C)))/4);
	}
	
	return 0;
}

