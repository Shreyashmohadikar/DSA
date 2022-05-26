#include <bits/stdc++.h>
using namespace std;

swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
printArray(int array[], int size){
    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
}

int partition(int array[], int low, int high){
    int pivot = array[high];
    int i = (low - 1);
    for (int j=low; j<high; j++){
        if(array[j]<=pivot){
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i+1], &array[high]);
    return(i+1);
}
void quickSort(int array[], int low, int high){
    if (low < high){
        int pi = partition(array, low, high);
        quickSort(array, low, pi-1);
        quickSort(array, pi+1, high);
    }
}
int main(){
    // int num;
    // cin>>num;
    // int arr[num];
    // for(int i=0; i<num; i++){
    //     cin>>arr[i];
    // }
    int arr[] = {8, 7, 6, 1, 0, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr,n);
    cout<<endl;
    quickSort(arr, 0, n-1);
    printArray(arr,n);    
    return 0;
}