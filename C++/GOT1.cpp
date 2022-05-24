#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int cc[26] ;
    for(int i=0; i<s.length(); i++){
        cc[s[i] - 'a']++;
    }
    int odd = 0, even = 0;
    for(int i=0; i<s.length(); i++){
        if(cc[i] % 2 ==0 ){
            even++;
        }
        else{
            odd++;
        }
    }
    if(odd<=1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    return 0;
}