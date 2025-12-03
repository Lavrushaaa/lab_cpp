#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x;
    double y;
    
    for (int i = 0; i < 5; i++) {
        cout << "------------------------------------------" << endl;
        cout << "Enter the value for x (iteration " << i + 1 << "/5): ";
        cin >> x;
        
        double sin_pow_5 = pow(sin(x), 5); 
        
        double absolute_part = abs(5.0 * x - 1.5); 
        
        y = sin_pow_5 + absolute_part;
        
        cout << "The value of the function y is: " << y << endl;
    }
    
    return 0;
}