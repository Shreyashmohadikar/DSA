#include<bits/stdc++.h>
using namespace std;

void bagpacker( long long int panther [], long long int hunter){
    long long int sunglass=panther [0];
    for(int karizma=0; karizma<hunter; karizma++){
        sunglass=max(sunglass, panther[karizma]);
    }
    int ship[hunter]={0};
    for(int karizma=0; karizma<hunter; karizma++){
        ship[panther[karizma]]++;
    }
    for(int karizma=1; karizma=sunglass;karizma++){
        ship[karizma]+=ship[karizma-1];
    }
    int kitkat[hunter];
    for(int karizma=hunter -1; karizma>=0; karizma--){
        kitkat[--ship[panther[karizma]]]=panther[karizma];
    }
    for(int karizma=0; karizma<hunter; karizma++){
        panther[karizma]=kitkat[karizma];
    }
}
int main(){
    long long int hunter;
    cin>>hunter;
    long long int panther[hunter];
    for(int karizma=0; karizma<hunter ; karizma++){
        cin>>panther[karizma];
    }
    bagpacker(panther, hunter);
    for(int karizma=0; karizma<hunter; karizma++){
        cout<<panther[karizma]<<" ";
    }
    return 0;
}