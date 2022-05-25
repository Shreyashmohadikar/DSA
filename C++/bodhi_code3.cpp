// Quick Sort
#include<iostream>
using namespace std;
void coin ( int arr[] , int cater, int flour, int hike ){
    if(cater>=hike){
        return;
    }
    int calculate=flour-cater+1;
    int warn=hike-flour;
    int boost[calculate];
    int second[warn];
    for (int curry=0;curry<calculate; curry++){
        boost[curry]=arr [cater+curry];
    }
    for (int little=0; little<warn;little++){
        second[little]=arr[flour+1+little];
    }
    int filter=cater;
    int wish=0, park=0;
    while( wish<calculate && park<warn){
        if(boost[wish]<=second[park]){
            arr[filter]=boost[wish];
            filter++;
            wish++;
        }
        else{
            arr[filter]=second[park];
            filter++;
            park++;
        }
    }
    while(wish<calculate) {
        arr[filter++]=boost[wish++];
    }
    while(park<warn){
        arr[filter++]=second[park++];
    }
}
void craft(int arr[], int cater, int hike){
    if(cater>=hike){
        return;
    }
    int flour = cater+(hike-cater)/2;
    craft(arr, cater, flour);
    craft(arr, flour+1, hike) ;
    coin(arr, cater, flour, hike );
}    
int main() {
    int nomenclature;
    cin>>nomenclature;
    int arr[nomenclature];
    for(int curry=0;curry<nomenclature; curry++){
        cin>>arr[curry];
    }
    craft(arr, 0, nomenclature-1);
    for(int curry=0; curry<nomenclature; curry++){
        cout<<arr[curry]<<" ";
    }
    return 0;
}