#include <bits/stdc++.h>
using namespace std;
const int n=1e7+2;
long long arr[n];
int main(){
    int n,q;
    cin>>n>>q;
    int l_index,r_index,num;
    
    // for(int i=0;i<n;i++){
    //     arr[i]=0;
    // }
    for(int i=0;i<q;i++){
        cin>>l_index>>r_index>>num;
        for(int j=l_index;j<=r_index;j++){
            arr[j-1]+=num;
        }
    }
    long long int max=-(1LL<<60);
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<max;
    return 0;
}




// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     long long int n,q;
//     cin>>n>>q;
//     long long int l_index,r_index,num;
//     long long int arr[n];
//     for(int i=0;i<n;i++){
//         arr[i]=0;
//     }
//     for(int i=0;i<q;i++){
//         cin>>l_index>>r_index>>num;
//         for(int j=l_index;j<=r_index;j++){
//             arr[j-1]+=num;
//         }
//     }
//     long long int max=1e7+2;
//     for(int i=0;i<n;i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }
//     }
//     cout<<max;
//     return 0;
// }