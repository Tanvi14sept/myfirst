#include<stdio.h>
int main(){
    int n,cases,a[10],sum,i,j;
    printf("How many cases:");
    scanf("%d",&cases);
    while(cases--)
    {
        printf("\n Array size:");
        scanf("%d",&n);
        printf("\n Array elements:");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("\n Desired sum:");
        scanf("%d",&sum);
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n-1;j++)
            {
                if(a[i]+a[j]==sum)
                {
                     printf("(%d %d)\n",a[i],a[j]);
                }
            }
        }
    }
}
