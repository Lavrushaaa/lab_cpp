#include <iostream>

using namespace std;

int main() {
    int octet1, octet2, octet3, octet4;
    
    cout << "Enter the first octet (1-255): ";
    cin >> octet1;

    cout << "Enter the second octet (0-255): ";
    cin >> octet2;

    cout << "Enter the third octet (0-255): ";
    cin >> octet3;

    cout << "Enter the fourth octet (0-255): ";
    cin >> octet4;

    if (octet1 < 1 || octet1 > 255 ||
        octet2 < 0 || octet2 > 255 ||
        octet3 < 0 || octet3 > 255 ||
        octet4 < 0 || octet4 > 255) 
    {
        cout << "\nError: One or more octets are outside the valid range (1-255 or 0-255)." << endl;
        return 1;
    }
    
    
    cout << "\nYour IP Address is: ";
    
    cout << octet1 << "." 
         << octet2 << "." 
         << octet3 << "." 
         << octet4 << endl;

    return 0;
}