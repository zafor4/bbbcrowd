#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        float num;
        cin>>num;
        int count=0;
        while (num>1){
            num=num/2;
            count++;
        }
        cout<<count<<" dias"<<endl;


    }


    return 0;
}