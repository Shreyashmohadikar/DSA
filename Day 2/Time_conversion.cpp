#include <bits/stdc++.h>
using namespace std;

void Time_conversion(string str)
{
    int h1 = str[0] - '0';
    int h2 = str[1] - '0';
    int hh = (h1*10)+(h2);

    //for "AM"
    if (str[8] == 'A'){
        if (hh == 12){
            cout<<"00";
            for(int i=2 ; i<=7 ; i++){
                cout<< str[i];
            }
        }
        else{
            for(int i=0 ; i<=7 ; i++){
                cout<<str[i];
            }
        }
    }
    //for "PM"
    else{
        if(hh == 12){
            cout<<"12";
            for(int i=2 ; i<=7 ; i++){
                cout<< str[i];
            }    
        }
        else{
            hh = hh + 12;
            for(int i=0 ; i<=7 ; i++){
                cout<< str[i];
            }
        }
    }

}

int main(){
    string str;
    cin>>str;
    Time_conversion(str);
    return 0;
}