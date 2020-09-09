#include <iostream>
#include <cmath>
#define MAX 1000

using namespace std;

int main(){
    int Students;
    int i; 
    float costs[50],given,taken,sumrs,diff,avg;
    
    while(scanf("%d", &Students) == 1){
        if(Students == 0){
            break;
        }
        
        sumrs = 0;
        for(i = 0; i < Students; i++){ 
            
            cin>>costs[i];
            sumrs=sumrs+costs[i];
            
        }
        avg = sumrs/Students;
        given = 0;
        taken = 0;
        
        for(i = 0; i < Students; i++){
            diff=costs[i]-avg;
            if(diff<0){
                taken -= diff;
            }
            else{
                given += diff;
            }
        }
        diff=taken>given?given:taken;
        printf("$%.2lf\n", diff);
    }
    
    return 0;
}
