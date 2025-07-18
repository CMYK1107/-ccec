#include<stdio.h>
int main(){
    int t, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        int i = 2, first = 1;
        while(n > 1){
            if(n % i == 0){
                if(!first) printf(" "); 
                printf("%d", i);
                n = n / i;
                first = 0;
            }
            else i++;
        }
        printf("\n");
    }
    return 0;
}