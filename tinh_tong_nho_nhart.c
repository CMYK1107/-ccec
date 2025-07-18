#include <stdio.h>
#define ull unsigned long long
ull swap(ull x, int k1, int k2) {
    ull so = 0, mul = 1;
    while (x != 0) {
        int digit = x % 10;
        if (digit == k1)    digit = k2;
        so = so + digit * mul;
        mul *= 10; 
        x /= 10;
    }
    return so;
}
int main(){
	int t;
	scanf("%i",&t);
	while(t--){
		ull n,m;
		scanf("%llu %llu",&n,&m);
		printf("%llu %llu\n",swap(n,6,5)+swap(m,6,5),swap(m,5,6)+swap(n,5,6));
	}
	
	return 0;
}

