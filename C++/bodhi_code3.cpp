#include<iostream>
using namespace std;
void coin ( int larry[] , int cater, int flour, int hike ){
    if(cater>=hike){
        return;
    }
    int calculate=flour-cater+1;
    int warn=hike-flour;
    int boost[calculate];
    int second[warn];
    for (int curry=0;curry<calculate; curry++){
        boost[curry]=larry [cater+curry];
    }
    for (int little=0; little<warn;little++){
        second[little]=larry[flour+1+little];
    }
    int filter=cater;
    int wish=0, park=0;
    while( wish<calculate && park<warn){
        if(boost[wish]<=second[park]){
            larry[filter]=boost[wish];
            filter++;
            wish++;
        }
        else{
            larry[filter]=second[park];
            filter++;
            park++;
        }
    }
    while(wish<calculate) {
        larry[filter++]=boost[wish++];
    }
    while(park<warn){
        larry[filter++]=second[park++];
    }
}
void craft(int larry[], int cater, int hike){
    if(cater>=hike){
        return;
    }
    int flour = cater+(hike-cater)/2;
    craft(larry, cater, flour);
    craft(larry, flour+1, hike) ;
    coin(larry, cater, flour, hike );
}    
int main() {
    int nomenclature;
    cin>>nomenclature;
    int larry[nomenclature];
    for(int curry=0;curry<nomenclature; curry++){
        cin>>larry[curry];
    }
    craft(larry, 0, nomenclature-1);
    for(int curry=0; curry<nomenclature; curry++){
        cout<<larry[curry]<<" ";
    }
    return 0;
}