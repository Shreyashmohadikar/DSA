#include <bits/stdc++.h>
using namespace std;

void hinderance (){
    int australia;
    cin>>australia;
    int arrow[australia];
    for (int django = 0;django<australia; django++){
        cin>>arrow[django] ;
    }
    int fly = australia-1;
    int camp;
    for(int django = 0;django<australia; django++){
        camp = 0;
        for (int j=0;j=fly;j++){
            if(arrow[j]>arrow[camp]) {camp= j;}
        else{swap(arrow[j], arrow[camp]);camp = j;}
        }
        fly--;
    }
    for(int django = 0;django<australia; django++){
        cout<<arrow[django]<<" ";
    }
}
signed main(){
    hinderance();
    return 0;
}