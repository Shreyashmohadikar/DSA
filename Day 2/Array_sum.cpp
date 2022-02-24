#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[1000],num;
    cin >> num;
    for (int i=0; i<num; i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for (int i=0; i<num; i++)
    {
        sum += arr[i];
    }
    cout<<sum;
    return 0;
}