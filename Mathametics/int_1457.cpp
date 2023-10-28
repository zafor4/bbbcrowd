#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

typedef unsigned long long int ulli;


ulli kFatorial(int n, int k){
    int i;
    ulli result = n;

    i = 1;

    while(true){

        if((n - i*k) < 1)
            break;
        
        result *= n - i*k;
        i++;
    }

    return result;
}


int main(){
    int n, t, k, i, j;
    char c;
    string nStr;
    ulli result;    
    bool flag;

    cin >> t;

    while(t--){

        cin >> nStr;
        
        k = 0;

        for(i = nStr.size() - 1; ; i--){

            if(nStr[i] != '!')
                break;
            else
                k++;
        }

        nStr.erase(i + 1);

        n = stoi(nStr);
        

        result = kFatorial(n, k); 
        cout << result << endl;
    }
    return 0;
}