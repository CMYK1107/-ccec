#include <stdio.h>
#include <stdlib.h>
int checkngto(int n) {
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    
    for (int i = 3; i * i <= n; i ++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int dao(int n) {
    int x = 0;  
    while (n) {
        x = x * 10 + n % 10;
        n /= 10;
    }
    return x;
}
int xoay(int n) {
    if (n < 10) return n;  
    
    int temp = n;
    int l = 0;
    int a[10];
    while (temp > 0) {
        a[l++] = temp % 10;
        temp /= 10;
    }
    int res = a[0];  
    for (int i = l - 1; i > 0; i--) {
        res = res * 10 + a[i];
    }
    
    return res;
}
int dem(int n) {
    if (n == 0) return 1;
    int count = 0;
    while (n) {
        count++;
        n /= 10;
    }
    return count;
}

int main() {
    int t;
    scanf("%d", &t);
    int a[t];
    for(int i=0; i<t; i++){
        scanf("%d", &a[i]);
        int x=a[i],ck=1;
        int l = dem(x);  
        for (int i = 0; i < l; i++) {
            x = xoay(x);
            if(!checkngto(x)){
            	printf("0 ");
            	ck=0;
            	break;
			}
        }
        if(ck) printf("1 ");
	}
    
    
    return 0;
}

