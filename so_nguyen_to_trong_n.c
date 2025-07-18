#include<stdio.h>

#define N 12
int p[N]={0},d[10]={0};
void sang(){
  p[0]=p[1]=p[4]=p[6]=p[8]=p[9]=1;
}
int main(){
  sang();
  char a[20];
  scanf("%s",a);
  int n=strlen(a);
  for(int i=0; i<n; i++){
    if(!p[a[i]-'0']){
      d[a[i]-'0']++;
    }
  }
  for(int i=0; i<10; i++){
    if(d[a[i]-'0'] != 0){
      printf("%c %d\n",a[i],d[a[i]-'0']);
      d[a[i]-'0']=0;
    }
  }

  return 0;
}