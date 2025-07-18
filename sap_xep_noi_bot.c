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
        scanf("%d", &a[i]);	
    for (int i = n - 1; i >= 0; i--)
    {
        int s = 0;
        for (int j = 0; j < i; j++)
        {
            if (a[j + 1] < a[j])
            {
             //  swap(&a[j],&a[j+1]);
               int tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
            else
                s++;
        }
        if (s == i)
            return 0;
        printf("Buoc %d: ", n - i);
        for (int j = 0; j < n; j++)
            printf("%d ", a[j]);
        printf("\n");
    }
}
