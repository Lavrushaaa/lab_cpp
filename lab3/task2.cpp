#include <iostream>
#include <string> 

using namespace std;

int main() {
    int train_number;
    
    cout << "Enter the train number (1, 2, 3, 4, 5, 6, 7): ";
    cin >> train_number;
        
    switch (train_number) {
        
        case 1:
            cout << "Route (1): Kyiv -> Odesa (Fast Express)" << endl;
            break; 
            
        case 2:
            cout << "Route (2): Lviv -> Kharkiv" << endl;
            break;
            
        case 3:
            cout << "Route (3): Dnipro -> Vinnytsia" << endl;
            break;

        case 4:
            cout << "Route (4): Odesa -> Kostiantynivka" << endl;
            break;
        
        case 5:
            cout << "Route (5): Zaporizhzhia -> Lviv" << endl;
            break;
            
        case 6:
            cout << "Route (6): Kyiv -> Przemyśl (International)" << endl;
            break;
            
        case 7:
            cout << "Route (7): Cherkasy -> Kovel" << endl;
            break;
            
        default:
            // Якщо номер не збігається з жодним із 7 варіантів
            cout << "Error: Train number " << train_number << " not found in the list (1-7)." << endl;
            break; 
    }

    return 0;
}