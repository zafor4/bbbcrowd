#include <iostream>
#include <iomanip>  // For setting precision
using namespace std;

float countaverage(float arr[], int n) {
    float count = 0, avg;
    for (int i = 0; i < n; i++) {
        count += arr[i];
    }
    avg = count / n;
    return avg;
}

float aboveaverage(float arr[], int n, float avg) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > avg) {
            count++;
        }
    }
    return count;
}

int main() {
    int test;
    cin >> test;
    for (int i = 0; i < test; i++) {
        int n;
        cin >> n;
        float arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        float avg = countaverage(arr, n);
        float numAboveAvg = aboveaverage(arr, n, avg);
        float percentage = (numAboveAvg * 100) / n;

        cout << fixed << setprecision(3) << percentage << "%" << endl;
    }
}
