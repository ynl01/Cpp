#include <iostream>
#include <iomanip> // For setprecision
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    
    // Perform division (convert A to float for accurate division)
    double result = static_cast<double>(A) / B;
    
    // Output the result with sufficient precision
    // Set precision to 10 decimal places as required
    cout << fixed << setprecision(10) << result << endl;

    return 0;
}
