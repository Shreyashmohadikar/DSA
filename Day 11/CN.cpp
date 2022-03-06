////////practice

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i=0;i <t; i++){
        int count=0;
        // int i=0;
        // int j=i+1;
        int size_str;
        cin>>size_str;
        char find_char;
        cin>>find_char;
        string str;
        cin>>str;
        for(int i=0;i<str.length(); i++){
            if(str[i] == find_char){
                cout<<count;
                count = 0;
                
            }
            else{
                count++;
                cout<<count;
            }
            i++;
        }

    }
    return 0;
}