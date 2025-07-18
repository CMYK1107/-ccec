#include <stdio.h>
void swap(int *a,int*b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        for (int j = 0; j <= i; j++)
        {
            for (int k = i; k > j; k--)
            {
                if (a[k] < a[k - 1])
                {
                   swap(&a[k],&a[k-1]);
                }
            }
        }
        printf("Buoc %d: ", i);
        for (int j = 0; j <= i; j++)
            printf("%d ", a[j]);
        if (i < n - 1)
            printf("\n");
    }
}
