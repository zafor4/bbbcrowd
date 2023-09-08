//Formula for n*n Grid's square sum :{ n*(n+1)*(2n+1) }/6 
//Formula for n*m Grid's Rectangle sum : { n*(n+1) /2 }^2
#include <iostream>
using namespace std;

int main() {
    int ans, n, t;

    while (cin >> n) {
        if (n == 0)
            break;
        
        ans = (n * (n + 1)) * (2 * n + 1);
        t = ans / 6;
        
        cout << t << endl;
    }

    return 0;
}
