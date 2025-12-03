#include <iostream> 
   
using namespace std;

int main() {
    
    int N;
    int digit;
    
    int product = 1;
    
    cout << "Enter a three-digit positive integer N: ";
    cin >> N;
    
    // Додаткова перевірка
    
    if ( N<100 || N>999 ){
        cout << "Error: The number N is not a three-digit number." << endl;
        return 1;
        
    }
    
    // 1. Цифра одиниць
    digit = N % 10;
    if (digit % 2 != 0) {
        product *= digit; // product = product * digit
    }
    
    // 2. Цифра десятків
    digit = (N / 10) % 10;
    if (digit % 2 != 0) {
        product *= digit;
    }
    
    // 3. Цифра сотень 
    digit = N / 100;
    if (digit % 2 != 0) {
        product *= digit;
    }
    
    cout << "The entered number N: " << N << endl;
    
    // Додаткова перевірка чи були непарні цифри взагалі
    if (product == 1) {
        cout << "The product of odd digits is: No odd digits found (result is 1)." << endl;
    } else {
        cout << "The product of odd digits is: " << product << endl;
    }

    return 0;
}