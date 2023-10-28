#include<iostream>
using namespace std;
int fun(int n){
    if (n==0){
        return 1;
    }
    else if (n==1){
        return 1;
    }

    return fun(n-1)+fun(n-2)+fun(n-3);
}
int main(){
    int n;
    cin>>n;
    int res=fun(n+1);
    cout<<res<<endl;


    return 0;
}