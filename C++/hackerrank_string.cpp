#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        string curr = "hackerrank";
        int count = 0;
        for(int i=0; i<str.size() && count<curr.size(); i++){
            if(str[i] == curr[count]){
                count++;
            }
        
        }
        if(count == curr.size()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        // cout<<count;
    }
    return 0;
}