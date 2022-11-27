#include <iostream>
#include <unistd.h>
#include <string>

using namespace std;

int main()
{
/**
    Hacer un programa en C++ que calcule el factorial de un número usando el bucle (WHILE).
**/

    cout << "***************************" << endl;
    cout << "|FACTORIAL NUMERO (!)      " << endl;
    cout << "***************************" << endl;
    sleep(2);
    system("clear");

    int numero = 0;
    cout << "[>] Introduce un numero cualquiera: "; cin >> numero;

    //
    int contenedor = 0;
    while(numero >= 1){

        if(numero == 1){
            cout << 1 << endl;
        }else{
            /**
                SUMAMOS TODOS LOS NUMEROS EN ORDEN DESCENDENTE.... FACTORIAL DE LOS NUMEROS.... (!) ->signo
            **/
            contenedor += ( numero + (numero--) );

        }

        numero--;


    }
     cout << contenedor << endl;

    return 0;
}
