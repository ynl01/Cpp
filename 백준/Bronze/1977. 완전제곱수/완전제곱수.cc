#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    int sum = 0;
    int minSquare = numeric_limits<int>::max();
    bool found = false;

    int start = ceil(sqrt(M)); // M 이상의 첫 번째 제곱근
    int end = floor(sqrt(N));  // N 이하의 마지막 제곱근

    for (int i = start; i <= end; ++i) {
        int square = i * i;
        sum += square;
        if (square < minSquare) {
            minSquare = square;
        }
        found = true;
    }

    if (found) {
        cout << sum << endl;
        cout << minSquare << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
