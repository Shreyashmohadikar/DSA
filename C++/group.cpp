#include <bits/stdc++.h>

using namespace std;

int main(){
    int n1,n2;
    cin>>n1>>n2;
    int final_count=0;
    int total_num_element = n2-n1+1;
    for(int i=n1;i<=n2;i++){
        int temp = i;
        int repeat_digit=0;
        int arr[10] = {0};
        while(temp>0){
            int r = temp%10;
            arr[r]++;
            temp/=10;
        }
        for (int i = 0; i < 10; i++) {
            if (arr[i] > 1) {
                repeat_digit++;
            }
        }
        if(repeat_digit>0){
            final_count++;
        }
    }
    cout<<total_num_element-final_count;
}