#include<iostream>
#include<vector>
#include<string>
using namespace std;

int fact(int n,int k){
    int ts=1;
    for (int i=0;i<=k;i++){
        if (n-(i*k)<=0){
            break;
        }
        ts*=(n-(i*k));

    }
    return ts;

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string num;
        cin >> num;
        int count = 0, i = 0;
        vector<char> c;
        
        while (num[i] != '!') {
            c.push_back(num[i]);
            count++;
            i++;
        }
        
        int ns = num.length() - count;

        int convertedInt = 0;
        for (char digit : c) {
            convertedInt = convertedInt * 10 + (digit - '0');
        }
        cout<<ns;
        int res=fact(convertedInt,ns);
        cout<<res<<endl;






    }

    return 0;
}
