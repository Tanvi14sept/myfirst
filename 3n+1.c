#include<stdio.h>
int main(){
  int n,c=1;
  printf("\n enter n:");
  scanf("%d",&n);
  printf("\n sequence :%d",n);
  while(n!=1){
    if(n%2==0)
      n=n/2;
    else
      n=(n*3)+1;
    c++;
    printf("\t %d",n);
  }
  printf("\n cycle length: %d",c);
  return 0;
}
