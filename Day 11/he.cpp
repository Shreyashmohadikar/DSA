#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int num;
	cin>>num;    
	for(int i = 0; i<num; i++)
    {
        int n;
        cin>>n;
        int sum =0;
        for(int j=1; j<n;j++)
        {
            if(n%j==0)
            {
                sum+=j;
            }
        }
        if(sum == n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }	
	return 0;
}