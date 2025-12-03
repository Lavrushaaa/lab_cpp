#include <iostream>
#include <cmath> 
#include <iomanip> // Для setprecision

using namespace std;

int main() {
    const double EPSILON = 0.000001; 
    
    int N1, N2;
    
    double result1, result2; 
    
    cout << "Enter the first integer (N1): ";
    cin >> N1;
    
    cout << "Enter the second integer (N2): ";
    cin >> N2;
    
    result1 = 1.0 / N1;
    result2 = 1.0 / N2;
    
    double difference = abs(result1 - result2);
    
    // точність для виводу Epsilon
    cout << fixed << setprecision(6);
    
    if (difference < EPSILON) {
        cout << "Results are equal (by " << EPSILON << " epsilon)" << endl;
        
    } else {
        cout << "Results are not equal (by " << EPSILON << " epsilon)" << endl;
    }

    return 0;
}