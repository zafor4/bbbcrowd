#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool is_upper(char c){
    if (c>='A'&& c<='Z'){
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        vector<char> v;
        v.push_back(s[0]);
        v.push_back(s[2]);
        char c=s[1];

        int k = (v[0] - '0');
        int l=(v[1]-'0');
        bool up_Or_LOw=is_upper(c);
        if (k==l){
            cout<<k*l<<endl;
        }
        else {
            if (up_Or_LOw==1){
                cout<<l-k<<endl;
            }
            else {
                cout<<l+k<<endl;
            }
        }
    }

    return 0;
}
