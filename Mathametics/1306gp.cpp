#include <iostream>
#include <map>

using namespace std;

int main() {
    int caseNumber = 1;
    
    while (true) {
        int R, N;
        cin >> R >> N;
        
        if (R == 0 && N == 0) {
            break;
        }
        
        if (R <= N) {
            cout << "Case " << caseNumber << ": 0" << endl;
        } else if (R > N * 26) {
            cout << "Case " << caseNumber << ": impossible" << endl;
        } else {
            int suffixes = (R % N == 0) ? R / N - 1 : R / N;
            cout << "Case " << caseNumber << ": " << suffixes << endl;
        }
        
        caseNumber++;
    }
    
    return 0;
}
