#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>
#include<assert.h>

#define N 93
long long p[N];

void sang() {
    p[0] = 0;
    p[1] = 1;
    for(int i = 2; i < N; i++) {
        p[i] = p[i-1] + p[i-2];
    }
}

int main() {
    sang();
    int t;
    scanf("%d", &t);
    while(t--) {  
        bool f = 1;
        unsigned long long n;
        scanf("%llu", &n);
        for(int i = 0; i < N; i++) {
            if(p[i] == n) {
                printf("YES\n");
                f = 0;
                break;
            }
            if(p[i] > n) break;
        }
        if(f) printf("NO\n");
    } 
    return 0;
}