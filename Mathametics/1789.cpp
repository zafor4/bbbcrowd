#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    while((scanf("%d",&n))!=EOF){
        int arr[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        if (arr[n-1]<10){
            cout<<1<<endl;
        }
        else if (arr[n-1]>=10 &&arr[n-1]<20){
            cout<<2<<endl;
        }
        else if (arr[n-1]>=20){
            cout<<3<<endl;
        }

    }


    return 0;
}