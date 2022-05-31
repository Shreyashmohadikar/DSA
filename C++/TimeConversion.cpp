#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    if (str.substr(8,10) == "PM"){
        string str2 = str.substr(0,2);
        int num = stoi(str2);
        int num2;
        if(num<12){
            num2 = num + 12;
        }
        else{
            num2 = num; 
        }
        cout<<num2<<str.substr(2,6);
    }
    else{
        string str2 = str.substr(0,2);
        int num = stoi(str2);
        int num2;
        if(num == 12){
            num2 = num - 12;
        }
        else{
            num2 = num; 
        }
        cout<<"0"<<num2<<str.substr(2,6);
    }
    return 0;
}