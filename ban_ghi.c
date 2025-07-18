#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<limits.h>
#include<stdbool.h>
#include<assert.h>

#define N 100004
typedef struct{
  float x, y,z;
  float s,p;
} ban_ghi_t;
int cmp(const void *a, const void *b){
  ban_ghi_t *x = (ban_ghi_t *)a;
  ban_ghi_t *y = (ban_ghi_t *)b;
  if(x->s < y->s) return -1;
  if(x->s > y->s) return 1;
  return 0;
}

int main(){
  int n;
  scanf("%d", &n);
  ban_ghi_t a[N];
  for(int i=0; i<n; i++){
    scanf("%f %f %f", &a[i].x, &a[i].y, &a[i].z);
    a[i].p = (a[i].z+a[i].x + a[i].y)*0.5;
    a[i].s = sqrt(a[i].p*(a[i].p-a[i].x)*(a[i].p-a[i].y)*(a[i].p-a[i].z));
  }
  qsort(a, n, sizeof(ban_ghi_t), cmp);
  for(int i=0; i<n; i++){
    printf("%.0f %.0f %.0f\n", a[i].x, a[i].y, a[i].z);
  }
  return 0;
}