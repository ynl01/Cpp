#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    int step3 = num1 * (num2 % 10);        
    int step4 = num1 * ((num2 / 10) % 10);  
    int step5 = num1 * (num2 / 100);     
    int result = num1 * num2;          
    
    cout << step3 << endl;
    cout << step4 << endl;
    cout << step5 << endl;
    cout << result << endl;
    
    return 0;
}
