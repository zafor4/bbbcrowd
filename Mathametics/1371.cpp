#include<iostream>
using namespace std;
int main(){

    while(1){
            int n;
        cin>>n;
        if (n==0){
            break;
        }

        int arr[n];
        for (int i=0;i<n;i++){
            arr[i]=0;
        }

        for (int i=1;i<=n;i++){
            for (int j=1;j<=n;j++){
                if (i*j>n){
                    break;
                }
                if (arr[j*i-1]==0){
                    arr[(j*i)-1]=1;

                }
                else if (arr[j*i-1]==1){
                    arr[(j*i)-1]=0;
                }
            }

        }
        for(int i=0;i<n;i++){
            if (arr[i]==1){
                cout<<i+1<<" ";
            }
        }
        cout<<endl;
        




    }



    return 0;
}