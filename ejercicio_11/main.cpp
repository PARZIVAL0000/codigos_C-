#include <iostream>
#include <unistd.h>


using namespace std;

int main()
{

    /**
     Los padres de una niña le prometieron darle 10 dólares cuando cumpliera 12 años de edad y duplicar
    el regalo en cada cumpleaños subsiguiente hasta que el regalo excediera 1000 dólares. Escriba un
    programa para determinar qué edad tendrá la niña cuando se le dé la última cantidad y la cantidad
    total recibida.                 .Usar la estructura de control (DO WHILE).

    **/

    //la edad de la chica = 12 tendra 10
    // cada cumpleaños multiplicamos por 2 ... entonces 2 * 10
    // El numero limitante es 1000
    //Ir aumentando la edad de la chica

    //establecemos como 12 para poder iniciar desde ahi.
    int edad = 12;
    int dinero = 10;

    do{

        //duplicamos el dinero
        dinero *= 2;
        //aumentos la edad de la chica.
        edad += 1;
    }while(dinero <= 1000);

    cout << "\n\t[>] La edad: " << edad << endl;
    cout << "\t[>] Dinero total recibida: " << "$"<<dinero << endl;

    return 0;
}
