#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int arr[num];
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }
    vector<int> left_arr;
    vector<int> right_arr;
    int pivot = arr[0];
    for(int i=1; i<num; i++){
        if(arr[i] > pivot){
            right_arr.push_back(arr[i]);
        }
        else{
            left_arr.push_back(arr[i]);
        }
    }
    for(int i=0; i < left_arr.size(); i++){
        cout<<left_arr[i]<<" ";
    }
    cout<<pivot<<" ";
    for(int i=0; i < right_arr.size(); i++){
        cout<<right_arr[i]<<" ";
    }
    return 0; 
} 
