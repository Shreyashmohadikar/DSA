#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    for(int i=0; i<n; i++){
        cin>>str[i];
    }
    // getline(cin,str);
    int d=1,l=1,u=1,sp=1;
    for(int i=0; i<n; i++){
        if('0'<=str[i] && str[i]<='9'){
            d=0;
        }
        else if('a'<=str[i] && str[i]<='z'){
            l=0;
        }
        else if('A'<=str[i] && str[i]<='Z'){
            u=0;
        }
        else {
            sp=0;
        }
    }
    cout<<max(d+l+u+sp,6-n);
    // int result = d+l+u+sp;
    // cout<<result;
    // int final = 6-result;
    // cout<<final;
    return 0;
}