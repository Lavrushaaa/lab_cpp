#include <iostream> 
#include <cmath>    
using namespace std;

int main() {
    double a, b, x, Y;

    cout << "Enter value for a: ";
    cin >> a;
    
    cout << "Enter value for b: ";
    cin >> b;
    
    cout << "Enter value for x: ";
    cin >> x;

    
    if (x < 0) {
        Y = pow(x, 3.0) + (a / b);
        
    } 
    else if (x == 0) { 
        Y = sin(a / b) + 4.0 * b * x;
        
    } 
    else { // x > 0
        Y = sqrt(x) + (a / b);
        
    }

    cout << "Calculated Y = " << Y << endl;

    return 0;
}