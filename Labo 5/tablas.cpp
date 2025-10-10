#include <iostream>
using namespace std;

int main(void)
{
    cout << "TABLAS DE MULTIPLICAR" << endl << endl;
    int n; 

    cout << "Ingrese el numero de la tabla que quire ver: ";
    cin >> n;

        for (int i = 1; i <= 20; i++){

            cout << n << " X " << i << " = " << n * i << endl;
            
        }
    
    return 0;
}