#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d) {
    int max = 0;
    a = max;
    if (b>a && b>c && b>d){
        max = b;
    }
    else if (c>a && c>b && c>d){
        max = c;
    }
    else if(d>c && d>b && b>d){
        max = d;
    }
    return max;
}
int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int ans = max_of_four(a, b, c, d);
    cout<<ans;    
    return 0;
}