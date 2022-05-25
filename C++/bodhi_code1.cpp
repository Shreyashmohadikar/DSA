//Counting Sort

#include<bits/stdc++.h>
using namespace std;

void bagpacker( long long int num[], long long int var){
    //num = {1 4 7 8 9}, var = 5
    long long int element=num[0]; 
    for(int i=0; i<var; i++){
        element=max(element, num[i]); 
    }
    //element = 5
    int arr[var]={0};//arr={0 0 0 0 0}
    for(int i=0; i<var; i++){
        arr[num[i]]++;
    }
    for(int i=1; i<element;i++){
        arr[i]+=arr[i-1];
    }
    int brr[var];
    for(int i=var-1; i>=0; i--){
        brr[arr[num[i]]]=num[i];
    }
    for(int i=0; i<var; i++){
        num[i]=brr[i];
    }
}
int main(){
    long long int var;
    cin>>var;
    long long int num[var];
    for(int i=0; i<var ; i++){
        cin>>num[i];
    }
    bagpacker(num, var);
    for(int i=0; i<var; i++){
        cout<<num[i]<<" ";
    }
    return 0;
}