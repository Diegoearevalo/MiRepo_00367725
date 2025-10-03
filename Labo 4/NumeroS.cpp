#include <iostream>
using namespace std;

int main() {
    int num = 0;
    do{
        cout << "Intenta adivinar el numero: ";
        cin >> num;
        if (num > 7)
        cout << "Te pasate: " << num << endl;

        else
            cout << "Aun no te pasas: " << num << endl;
        
    }while (num != 7);

    return 0;
}