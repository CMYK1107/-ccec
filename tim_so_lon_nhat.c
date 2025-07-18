#include <stdio.h>
#include <math.h>
#define ull unsigned long long
int main(){
    ull n;
    ull max=0;
    while(scanf("%llu",&n) == 1){
        max=fmax(max,n);
    }
    printf("%llu",max);
    return 0;
}

