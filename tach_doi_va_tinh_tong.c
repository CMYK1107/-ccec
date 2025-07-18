#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 500

void add0(char a[500],int *l1,char b[500],int *l2){
  *l1=strlen(a);
  *l2=strlen(b);
  while(*l1 > *l2){
    for(int i=*l1; i>=0; i--){
      b[i+1]=b[i];
    }
    b[0]='0';
    (*l2)++;
  }
}
void cong(char a[100],char b[100],char c[100]){
  int l1,l2;
  char v[100];
  add0(a,&l1,b,&l2);
  add0(b,&l2,a,&l1);
  int res=0,j=0;
  for(int i=l1-1; i>=0; i--){
    if(i==0 && ((a[i]-'0') + (b[i]-'0') + res) >= 10) v[i]= ((a[i]-'0') + (b[i]-'0') + res) ;
    else v[i]=(((a[i]-'0') + (b[i]-'0') + res)%10);
    res=((a[i]-'0') + (b[i]-'0') + res)/10;
  }
  for(int i=0; i<l1; i++){
    if(v[i]>9){
      c[j]=v[i]/10+'0';
      c[++j]=v[j]%10+'0';
    }else c[j]=v[i]+'0';
    j++;
  }
  c[j]='\0';
}

int main() {
    char x[MAX_LEN];
    char a[MAX_LEN], b[MAX_LEN], c[MAX_LEN * 2];
    scanf("%s",x);
    
    while (strlen(x) > 1) {
        int n = strlen(x);
        int half = n / 2;
        strncpy(a, x, half);
        a[half] = '\0';
        strcpy(b, x + half);
        cong(a, b, c);
        printf("%s\n", c);
        strcpy(x, c);
    }
    return 0;
}