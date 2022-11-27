#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
    //Hacer un programa en C++ que escriba en pantalla los números múltiplos de 3 comprendidos del 1 al
    //100. (FOR)

    int y = 100;

    for(int x = 1; x<=100;x++){
        if(x%3 == 0){
            cout << "[>] MULTIPLO DE 3 ES: " << x << endl;

        }


    }

    return 0;
}
