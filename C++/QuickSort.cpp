#include <bits/stdc++.h>
using namespace std;

printArray

int main(){
    // int num;
    // cin>>num;
    // int arr[num];
    // for(int i=0; i<num; i++){
    //     cin>>arr[i];
    // }
    int arr[] = {8, 7, 6, 1, 0, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printArray(arr,n);    
    return 0;
}