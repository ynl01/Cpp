#include <iostream>
using namespace std;

int main() {
    int A, B, C;

    cin >> A >> B;
    cin >> C;


    B += C;

    A += B / 60;
    B = B % 60;

    A = A % 24;

    cout << A << " " << B << endl;

    return 0;
}
