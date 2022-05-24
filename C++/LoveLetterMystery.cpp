#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        // int size = str.size();
        // int arr[100];
        // for(int i = 0; i<size; i++){
        //     arr[str[i]-'a']++;
        // }
        int count = 0;
        // for(int i = size-1; i>=size/2; i--){
        //     int diff = arr[i] - arr[size-i];
        //     if (diff > 0){
        //         count+=diff;
        //     }
        // }
        int i = 0;
        int j = str.length()-1;
        while(i<j){
            count += abs(str[i]-str[j]);
            i++;
            j--;
        }
        cout<<count<<endl;
    }
    return 0;
}