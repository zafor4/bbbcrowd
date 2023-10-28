#include<iostream>
#include<vector>
using namespace std;
int factorial(int n){
    if (n==1){
        return 1;
    }
    else {
        return n*factorial(n-1);
    }
}
int main(){
    while(true){
    int n;
    cin>>n;
    if (n==0){
        break;
    }
    int count=0;
    vector<int>v;
    while (n>0){
        count++;
                v.push_back(n%10);
        n=n/10;

    }
int res=0;
for (int i=0;i<count;i++){
    res+=(v[i]*factorial(i+1));
}
cout<<res<<endl;
    }


    return 0;
}