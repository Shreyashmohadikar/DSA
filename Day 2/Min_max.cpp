#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5];
    int sum = 0;
    for(int i=0; i<5;i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }
    sort(arr,arr + 5);
    cout<<sum - arr[5]<<endl<<sum - arr[0];
    return 0;
}