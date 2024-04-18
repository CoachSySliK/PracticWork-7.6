#include <iostream>

using namespace std;

int main()
{
    int length;
    int simbol;
    bool rightInput = false;
    
    do {
        cout << "Введите общее количество символов: ";
        cin >> length;
        cin.ignore(100, '\n');
        cout << "Введите количество восклицательных знаков: ";
        cin >> simbol;
        cin.ignore(100, '\n');

        

        if (length < 1 || simbol < 1 || length < simbol) {
            cout << "Не корректные значения!!!\n";
            rightInput = true;
        }
    } while (rightInput);

    if (length % 2 != 0 && simbol % 2 != 0) length -= 2;
    if (length == -1) {
        cout << "!";
        return 0;
    }
    if (length % 2 != 0) cout << "~";    
    length -= simbol;

    for (int i = 0; i < length / 2; i++) {
        cout << "~";       
    }
    for (int i = 0; i < simbol; i++) {        
        cout << "!";
    }
    for (int i = 0; i < length / 2; i++) {
        cout << "~";
    }
    if (simbol % 2 != 0) cout << "~";

    return 0;
}
