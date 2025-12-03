#include <iostream>
#include <cmath> 
#include <iomanip>

using namespace std;

int main() {
    double a, b, h;
    
    double x; 
    
    cout << "--- Tabulation of the function y = sqrt(sin(x)) + x^2 ---" << endl;
    cout << "Enter the start of the interval (a): ";
    cin >> a;
    
    cout << "Enter the end of the interval (b): ";
    cin >> b;
    
    cout << "Enter the step (h): ";
    cin >> h;

    x = a;

    // заголовок таблиці
    const int W = 15; // Ширина колонки
    
    cout << "\n--------------------------------------------------" << endl;
    cout << "|" << setw(W) << "X" << " |" << setw(W) << "Y" << " |" << endl;
    cout << "--------------------------------------------------" << endl;

    // точність для виводу чисел
    cout << fixed << setprecision(6); 

    while (x <= b) {
        
        // Перевірка ОДЗ
        double sin_x = sin(x);
        
        // Якщо sin(x) < 0 припиняємо табулювання
        if (sin_x < 0) {
            cout << "\n--------------------------------------------------" << endl;
            cout << "Tabulation stopped at x = " << x << endl;
            cout << "Value of sin(x) is negative, function is outside the domain (ODZ)." << endl;
            break;
        }
        
        // Обчислення функції y = sqrt(sin x) + x^2
        double y = sqrt(sin_x) + x * x;
        
        // Виведення результату у табличному форматі
        cout << "|" << setw(W) << x << " |" << setw(W) << y << " |" << endl;
        
        // Перехід до наступного значення аргументу
        x += h;
    }
    
    return 0;
}