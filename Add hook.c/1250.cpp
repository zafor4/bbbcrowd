#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int arr[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        string s;
        cin>>s;
        vector <char> c;
        for (int i=0;i<n;i++){
            c.push_back(s[i]);
        }
        int count=0;
        for (int i=0;i<n;i++){
            if ((arr[i]==1||arr[i]==2)&&c[i]=='S'){
                count++;
            }
            else if (arr[i]>2 && c[i]=='J'){
                count++;
            }
        }
        cout<<count<<endl;



    }


    return 0;
}