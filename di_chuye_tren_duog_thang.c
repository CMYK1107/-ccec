#include <stdio.h>
#include <math.h>
#define ull long
ull check(ull x, ull y) {
    ull res =abs( y - x);
    if (res <= 1) return res;

    ull k = (ull)sqrt(res);
    if (k * k == res) {
        return 2 * k - 1;
    } else if (res <= k * (k + 1)) {
        return 2 * k;
    } else {
        return 2 * k + 1;
    }
}

int main() {
    ull x, y;
    while(scanf("%llu %llu", &x, &y)!=-1){
    	ull steps = check(x, y);
    	printf("%llu\n", steps);
	}
    return 0;
}
