#include <iostream> 
#include <cmath>    

using namespace std;

int main() {
    double a = 1.0;
    double b = 12.21;
    
    
    double cbrt_a = cbrt(a);
    double cbrt_b = cbrt(b);
    
    double bracket_expression = (0.81 * cbrt_a) - ((1.0 / 2.125) * cbrt_b);
    
    double exp_a = exp(a);

    double y = bracket_expression * exp_a;
    
    cout << "Result y = " << y << endl;

    return 0;
}
