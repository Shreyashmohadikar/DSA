#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3];
    int brr[3];
    for(int i=0 ; i<3 ; i++)
    {
        cin>>arr[i];
    }
    for(int i=0 ; i<3 ; i++)
    {
        cin>>brr[i];
    }
    
    int alice=0;
    int bob=0;
    for(int i=0 ; i<3 ; i++)
    {
        if(arr[i]>brr[i])
        {
            alice++;
        }
        else if(arr[i]<brr[i])
        {
            bob++;
        }
        else{
            alice += 0;
            bob += 0;
        }
    }
    cout<<alice<<" "<<bob;
    
    return 0;

}