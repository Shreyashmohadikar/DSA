// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     string str1, str2;
//     while(t--){
//         int count =0;
//         cin>>str1>>str2;
//         for(int i=0; i<str1.length();i++){
//             for(int j=i; j<str2.length();j++){
//                 if(str1[i] == str2[j]){
//                     count++;
//                     break;
//                 }
//             }
//         }
//         if(count>0){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a; cin >> a;
    for (int g=0;g<a; g++)
    {
        string b,c; cin >> b >> c; 
        map <char,int> k; 
        int flag =0;
        for (int y=0;y<b.length(); y++){
            k[b[y]]=1; 
            flag=0; 
        }
        for (int y=0;y<c.length(); y++) 
        {
            if (k[c[y]] ==1); 
            flag=1; 
        }
        if (flag = 1){
            cout << "YES" << '\n';
        } 
        else cout << "NO" << '\n'; 
    }return 0; 
}
