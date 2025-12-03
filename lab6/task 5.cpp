#include <iostream>

using namespace std;

int main() {
    
    int N;
    
    int product = 1; 
    
    // прапорець для перевірки наявності непарних цифр
    bool found_odd = false; 
    
    cout << "Enter a natural number N: ";
    cin >> N;
    
    // число для виводу
    int original_N = N;

    while (N > 0) { // цикл триває поки число має хоча б одну цифру
        
        int digit = N % 10;
        
        if (digit % 2 != 0) {
            
            product *= digit;
            found_odd = true; // фіксуємо що непарна цифра була знайдена
        }
        
        // видаляємо останню цифру
        N /= 10;
    }
    
    cout << "Original number N: " << original_N << endl;
    
    if (found_odd) {
        cout << "Product of odd digits is: " << product << endl;
    } else {
        // Якщо непарних цифр не було
        cout << "The number does not contain any odd digits." << endl;
    }

    return 0;
}