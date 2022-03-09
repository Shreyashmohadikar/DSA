#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int arr[num];
    for(int i=0; i<num ; i++){
        cin>>arr[i];
    }
    int max_num = 0;
    for(int i=0; i<num ; i++){
        max_num = max(max_num,arr[i]);
    }
    int count = 0;
    for(int i=0; i<num ; i++){
        if (arr[i] == max_num){
            count++;
        }
    }
    cout<<count<<endl;
    return 0 ;
}