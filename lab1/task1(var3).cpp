#include <iostream> 
#include <cmath> 

using namespace std;

int main() {
    double a = 10.0;
    double b = 0.5;
    const double PI = 3.141592653589793; 

    double numerator = 0.314 * exp(a) - 0.512 * exp(b);
    double denominator = sin((b / 3.0) * PI);
    double logarithm = log(a);

    double y = (numerator / denominator) * logarithm;
    
    cout << "Result y = " << y << endl;

    return 0;
}