#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i,j,flag=0;
    cin>>t;
    // char s[100005];
    string s;
    while(t--){
        flag = 0;
        // cin>>s;
        // int n = strlen(s);
        getline(cin,s);
        int n = s.length();
        for(i=0, j=n-1; i<n/2; i++,j--){
            if(s[i] != s[j]){
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            if(s[j] == s[i+1] && s[j-1] == s[i+2] ){
                cout<<i<<endl;
            }            
            else{
                cout<<j<<endl;
            }
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}