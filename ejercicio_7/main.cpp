#include <iostream>
#include <unistd.h>
#include <cstdlib>
using namespace std;

int main()
{


/*
    Calcular e imprimir la tabla de multiplicar de un número cualquiera. Imprimir el multiplicando,
    el multiplicador y el producto. (FOR)
*/

    int x = 10;
    for(int i = 0; i <= 10; i++){
        cout << i << " * " << x << " = " << i * x << endl;

        x--;
    }

    return 0;
}
