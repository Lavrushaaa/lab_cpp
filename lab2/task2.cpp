#include <iostream> 
#include <cmath>    
using namespace std;

int main() {
    double x, y;
    
    cout << "Enter value for x: ";
    cin >> x;
    
    cout << "Enter value for y: ";
    cin >> y;
    
    if (((x >= -1.0 && x <= 0.0) && (y >= 0.0 && y <= 1.0)) ||
    ((x >= 0.0 && x <= 1.0) && (y >= -1.0 && y <= 0.0))) {
        cout << "The point (" << x << ", " << y << ") BELONGS to the shaded area." << endl;
        
    }  else { 
        cout << "The point (" << x << ", " << y << ") DOES NOT BELONG to the shaded area." << endl;
        
    }

    return 0;
}