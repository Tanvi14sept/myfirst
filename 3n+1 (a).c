#include<stdio.h>
int cyclesize(int x){
  int cycle=1;
  while(x!=1)
  {
      if(x%2==0)
        x=x/2;
      else
        x=(x*3)+1;
      cycle++;
  }
  return cycle;
}
int maxcyclesize(int a, int b){
    int maxcycle, thiscycle;
    maxcycle=0;
    for(;a<=b;a++)
    {
        thiscycle=cyclesize(a);
        if(thiscycle>maxcycle)
            maxcycle=thiscycle;
    }
    return maxcycle;
}
int main(){
    int a,b,cases;
    scanf("%d",&cases);
    while(cases-->0){
        scanf("%d %d",&a,&b);
    }
    printf("\n %d %d %d",a,b,maxcyclesize(a,b));
    return 0;
}
