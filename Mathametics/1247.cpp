#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float d, vf, vg;

    while (cin >> d >> vf >> vg) {
        float dist = sqrt(144 + d * d);
        float tf = 12 / vf;
        float tg = dist / vg;

        cout << (tg <= tf ? 'S' : 'N') << endl;
    }

    return 0;
}
