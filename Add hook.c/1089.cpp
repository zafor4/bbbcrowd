#include<iostream>
#include <cmath>
using namespace std;
int main(){
    while (1){
    int size;
        int count=0;
    cin>>size;
    if (size==0){
        break;
    }
    int arr[size];
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }

    for (int i=1;i<size-1;i++){
        if (arr[i]>arr[i-1] && arr[i]>arr[i+1] || arr[i]<arr[i-1] && arr[i]<arr[i+1]){
            count++;
        }
    }
    if (arr[0]>arr[size-1] && arr[0]>arr[1]|| arr[0]<arr[size-1] && arr[0]<arr[1]){
        count++;
    }
    if (arr[size-1]>arr[0]&&arr[size-1]>arr[size-2] || arr[size-1]<arr[0] && arr[size-1]<arr[size-2]){
        count++;
    }
    cout<<count<<endl;
    }

    return 0;
}