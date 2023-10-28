#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int k=0;
    int t;
    cin>>t;
    while (t--){
        k++;
        int n;
        cin>>n;
        int arr[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        cout<<"Case "<<k<<": "<<arr[n/2]<<endl;

    }

    return 0;
}