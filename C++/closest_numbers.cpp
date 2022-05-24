#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int min = 10000;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int diff = arr[j] - arr[i];
            
            if (diff<min && diff>0){
                min = diff;
            }
        }
    }
    // cout<<min;
    for(int i=0; i<n; i++){ 
        for(int j=0; j<n; j++){
            if(arr[j] - arr[i] == min){
                cout<<arr[i]<<" "<<arr[j]<<" ";
            }
        }
    }
    return 0;
}