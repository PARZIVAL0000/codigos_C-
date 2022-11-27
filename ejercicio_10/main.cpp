#include <iostream>
#include <unistd.h>
#include <cstdlib>

using namespace std;

int main()
{
    /**
        Realizar un programa que determine en un conjunto de n números naturales:
     ¿Cuántos son menores que 15?
     ¿Cuántos son mayores que 50?
     ¿Cuántos están en el rango entre 25 y 45?
     Usar la estructura de control (DO WHILE).


     //ejemplo:
     1
     2
     3
     4
     5
    **/
    int a;
    int menores = 0;
    int mayores = 0;
    int intermedio = 0;

    cout << "\n\t[>] Ingresa un numero: "; cin >>a;

    do{
        if(a < 15){
            menores += 1;
        }

        else if(a > 50){
            mayores += 1;
        }

        else if(a >= 25 && a <= 45){
            intermedio += 1;
        }


        a -= 1;

    }while(a >= 1);

    cout << " [>] El total de numeros menores son: " << menores << endl;
    cout << " [>] El total de numeros mayores son: " << mayores << endl;
    cout << " [>] El total de numeros entre 25 y 45 son: " << intermedio << endl;

    return 0;
}
