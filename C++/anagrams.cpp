#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int half = (str.length())/2;
        int arr[half],brr[half];

        for(int i = 0; i < half; i++){
            arr[i] = str[i] - 'a';
        }
        for(int j = half ; j < str.length(); j++){
            brr[j - half] = str[j] - 'a';
        }

        sort(arr , arr + half);
        sort(brr , brr + half);

        int count = 0;
        if(str.length() % 2 == 0){
            for(int i=0; i<half; i++){
                if (arr[i] != brr[i]){
                    count++;
                }
            }
        }
        else{
            count = -1;
        }
        
        cout<<count<<endl;
        
        // for(int i=0; i<size_arr; i++){
        //     cout<<arr[i]<<" ";
        //     // cout<<brr[i]<<" ";
        // }
        // cout<<endl;
        // for(int i=0; i<size_brr; i++){
        //     cout<<brr[i]<<" ";
        //     // cout<<brr[i]<<" ";
        // }

    }
    


    return 0;
}
