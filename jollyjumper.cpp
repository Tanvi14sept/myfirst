#include<iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
    int flag, s, n, i, d, num[50],diff[50];
    cin>>s;
    while(s--){
        cin>>n;
        for(i=1;i<=n;i++){
            cin>>num[i];
            diff[i]=0;
        }
        for(i=1;i<n;i++){
            d=abs(num[i]-num[i+1]);
            if(d>=1 && d<n)
                diff[d]++;
        }
        flag=1;
        for(i=1;i<n;i++){
            if(diff[i]==0)
                flag=0;
        }
        if(flag)
            cout<<"\n jolly"<<endl;
        else
            cout<<"\n not jolly"<<endl;
    }
    return 0;
}
