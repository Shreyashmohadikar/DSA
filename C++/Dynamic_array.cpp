#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    int lastAnswer = 0;
    cin>>n>>q;
    vector<vector<int>> v(n);
    while(q--){
        long long x,y;
        int a;
        cin>>a>>x>>y;
        long long idx = (x^lastAnswer)%n;
        if(a==1){
            v[idx].push_back(y);
        }
        else{
            long long size_v = v[idx].size();
            long long idy;
            if(size_v != 0){
                idy = y % size_v;
            }
            else{
                continue;
            }
            cout<<v[idx][idy]<<endl;
            lastAnswer = v[idx][idy];
        }
    }
    return 0;
}