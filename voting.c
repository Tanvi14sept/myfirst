#include<stdio.h>
int main()
{
    int limit,i,j,parties,vote,cnt[100],flag[100],party[100];
    printf("How many parties?");
    scanf("%d",&parties);
    printf("How many votes allowed on one EVM?");
    scanf("%d",&limit);
    for(i=0;i<=parties;i++)
    {
        cnt[i]=flag[i]=0;
    }
    i=1;
    do
    {
        printf("Enter votes :");
        scanf("%d",&vote);
        if(i%(parties+1)!=0)
            cnt[vote]++;
        else
            flag[vote]++;
        i++;
    }while(i<=limit);
    for(i=1;i<=parties;i++)
    {
        party[i]=cnt[i]+flag[i];
        printf("\nActual result: %d",party[i]);
    }
    for(i=1;i<=parties-1;i++)
    {
        party[i]=cnt[i];
    }
    j=0;
    for(i=1;i<=parties;i++)
    {
        j=j+flag[i];
        party[parties]=cnt[parties]+j;
        printf("\nmanipulated result: %d",party[parties]);
    }
    return 0;
}

