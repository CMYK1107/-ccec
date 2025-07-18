#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
typedef struct{
	int ma;
	char nam[100],nhom[100];
	double giamua,giaban;
	double lai;	
}Shop;
int d=1;
Shop table[1000];
int cmp(const void*a, const void*b){
	Shop *A=(Shop *)a;
	Shop *B=(Shop *)b;
	if(A->lai>B->lai) return -1;
	else if(A->lai<B->lai) return 1;
	else return 0;
}
void inp(int n){
	for(int i=0; i<n; i++){
		table[i].ma=i+1;
		scanf("\n%[^\n",table[i].nam);
		scanf("\n%[^\n]",table[i].nhom);
		scanf("%lf%lf",&table[i].giamua,&table[i].giaban);
		table[i].lai=table[i].giaban-table[i].giamua;
	}
}
void out(int n){
	for(int i=0; i<n; i++){
		printf("%d %s %s %.2lf\n",table[i].ma,table[i].nam,table[i].nhom,table[i].lai);
	}
}
int main(){
	scanf("%d",&d);
	inp(d);
	qsort(table,d+1,sizeof(Shop),cmp);
	out(d);
	return 0;
}
