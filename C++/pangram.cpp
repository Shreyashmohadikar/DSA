#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int arr[26]={0};
    for(int i=0; i<str.size(); i++){
        if(str[i]>= 'a' && str[i]<='z'){
            arr[str[i]-'a'] = 1;
        }
        else if(str[i]>='A' && str[i]<='Z'){
            arr[str[i]-'A'] = 1;
        }
    }
    for(int i=0; i<26; i++){
        if(arr[i] == 0){
            cout<<"NO";
            exit(0);
        }
    }
    cout<<"YES";
    return 0; 
}