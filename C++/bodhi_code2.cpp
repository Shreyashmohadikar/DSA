//Bubble Sort

#include <bits/stdc++.h>
using namespace std;

void hinderance (){
    int num;
    cin>>num;
    int arr[num];
    for (int i = 0;i<num; i++){
        cin>>arr[i] ;
    }
    int fly = num-1;
    int camp;
    for(int i = 0;i<num; i++){
        camp = 0;
        for (int j=0;j=fly;j++){
            if(arr[j]>arr[camp]) {
                camp= j;
                }
            else{
                swap(arr[j], arr[camp]);
                camp = j;
                }
        }
        fly--;
    }
    for(int i = 0;i<num; i++){
        cout<<arr[i]<<" ";
    }
}
signed main(){
    hinderance();
    return 0;
}