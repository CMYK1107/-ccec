#include <stdio.h>
#include <math.h>
int main() {
    int n,res=0;
    scanf("%d", &n);
	for (int i = n;i >= 0; i--) {
		for(int j=1;j<=i*2;j+=2){
      printf("%c",64 + j +res);
    }
    res+=2;
		printf("\n");
	}
}
