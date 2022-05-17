#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str[n];
    for (int i=0;i<n;i++){
        cin>>str[i];
    }
    int q;
    cin>>q;
    string quer[q];    
    for (int j=0;j<q;j++){
        cin>>quer[j];
    }
    for(int j=0; j<q; j++){
        int count=0;
        for(int i=0; i<n;i++){
            if(quer[j]==str[i]){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}