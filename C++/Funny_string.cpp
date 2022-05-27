#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int num = str.size();
        bool flag = true;
        string r = str; 
        // for(int i=num-1; i>=0; i--){
        //     r[i]= str[num-i-1];
        // }
        // for(int i=0; i<num; i++){
        //     cout<<r[i];
        // }
        reverse(r.begin(), r.end());
        for(int i=0; i<num-1; i++){
            if (abs(str[i] - str[i+1]) != abs(r[i] - r[i+1])){
                flag = false;
            }
        }
        if(flag){
            cout<<"Funny"<<endl;
        }
        else{
            cout<<"Not Funny"<<endl;
        }
    }
    return 0;
}