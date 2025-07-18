#include<stdio.h>
#define N 100
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int f[n],max=0;
        for(int i=0; i<n; i++){
            scanf("%d", &f[i]);
            if(f[i]>max) max=f[i];
        }
        printf("%d\n", max);
        for(int i=0; i<n; i++){
            if(f[i]==max) printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}