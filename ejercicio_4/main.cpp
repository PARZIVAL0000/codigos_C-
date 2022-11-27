#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
    /*
        Hacer un programa en C++ que lea dos números x e y, luego hacer la diferencia x - y; si la diferencia
        es menor o igual a 10, entonces escribir todos los números comprendidos entre y y x.
    */


    cout << "****************************************" << endl;
    cout << "|DOS NUMEROS Y SU DIFERENCIA           |" << endl;
    cout << "****************************************" << endl;
    sleep(2);
    system("clear");

    int x, y = 0;
    int diferencia = 0;

    cout << "[*] Inserta tu primer numero: " << endl;
    cin >> x;
    cout << "[*] Inserta tu segundo numero: " << endl;
    cin >> y;

    //la resta de los dos numeros
    diferencia = x - y;

    //calculamos que es menor o igual a 10

    if(diferencia <= 10){
        cout << "\nLos numeros comprendidos son: ";
        //los numeros comprendidos...
        if(y >= x){
            cout << y << endl;
            while(y >= x){
                cout << y << endl;
                y--;

            }
        }else{
            cout << x << endl;
            while(x >= y){
                cout << x << endl;
                x--;

            }
        }

    //diferencia...
    }


    return 0;
}
