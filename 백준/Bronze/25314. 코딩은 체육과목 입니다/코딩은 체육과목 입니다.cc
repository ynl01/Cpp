#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;  

    int numLongs = N / 4;  

    for (int i = 0; i < numLongs; ++i) {
        cout << "long ";
    }
    cout << "int" << endl;  

    return 0;
}
