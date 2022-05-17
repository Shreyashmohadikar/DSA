#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tcase;
    cin>>tcase;
    for(int i=1;i<=tcase;i++)
    {
        int No_of_ponds;
        cin>>No_of_ponds;
        int No_of_days;
        cin>>No_of_days;

        int Arr[No_of_days];
        int Brr[3];
        for(int i=0; i<No_of_ponds;i++){
            cin>>Arr[i];

            Brr[0] = Arr[i];
            Brr[1] = Arr[i+1];
            Brr[2] = Arr[i+2];
        }
        // for(int i=0; i<No_of_ponds;i++){ 

            
        // }
        if(Brr[0]<Brr[1] && Brr[1]<Brr[2]){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}